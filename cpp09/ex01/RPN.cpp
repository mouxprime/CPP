/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RPN.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mianni <mianni@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/09 15:00:01 by mianni            #+#    #+#             */
/*   Updated: 2025/05/10 12:29:11 by mianni           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RPN.hpp"

bool parsing(const std::string& line)
{
    std::string::const_iterator it = line.begin();
    while (it != line.end())
    {
        if (*it != ' ' && !std::isdigit(*it) && *it != '+' && *it != '-' && *it != '*' && *it != '/')
            break;
        it++;
    }
    if (it != line.end())
        return (std::cerr << "Error: char '" << *it << "' is not allowed here" << std::endl, false);
    return true;
}
double    do_operation(char c, double a, double b)
{
    if (c == '+')
        return (a + b);
    if (c == '-')
        return (b - a);
    if (c == '*')
        return (a * b);
    else
        return (a / b);
}
void calculate_expression(std::string& line)
{
    std::stack<double> stack;
    std::string::const_iterator it = line.begin();
    while (it != line.end())
    {
        if (std::isdigit(*it)){
            double value = static_cast<double>(*it - '0');
            stack.push(value);
        }
        else if (*it != ' ')
        {
            if (stack.size() < 2){
                std::cerr << "Error: not enough numbers in stack" << std::endl;
                return;
            }
            double a = stack.top();
            stack.pop();
            double b = stack.top();
            stack.pop();
            double result = do_operation(*it, a, b);
            stack.push(result);
        }
        it++;
    }
    double result = stack.top();
    std::cout << result << std::endl;
}