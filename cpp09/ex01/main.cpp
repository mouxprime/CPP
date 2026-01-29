/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mianni <mianni@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/09 14:59:56 by mianni            #+#    #+#             */
/*   Updated: 2025/05/10 12:29:19 by mianni           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RPN.hpp"

int main(int argc, char **argv)
{
    if (argc != 2)
        return (std::cerr << "Error: usage ./RPN <std::string>. Please try again." << std::endl , 1);
    if (!parsing(argv[1]))
        return -1;
        else {
        std::string line = argv[1];
        calculate_expression(line);
    }
}