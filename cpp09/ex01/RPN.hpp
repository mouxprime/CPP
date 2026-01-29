/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RPN.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mianni <mianni@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/09 15:00:04 by mianni            #+#    #+#             */
/*   Updated: 2025/05/10 12:02:24 by mianni           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef RPN_HPP
#define RPN_HPP

#include <stack>
#include <string>
#include <iostream>
#include <iomanip>
#include <cstdlib>

extern std::stack<double> stack;
bool parsing(const std::string& line);
void calculate_expression(std::string& line);


#endif