/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   BitcoinExchange.hpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mianni <mianni@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/05 12:37:56 by mianni            #+#    #+#             */
/*   Updated: 2025/05/09 13:40:34 by mianni           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BITCOINEXCHANGE_HPP
# define BITCOINEXCHANGE_HPP

#include <iostream>
#include <fstream>
#include <sstream>
#include <string>
#include <map>
#include <cstdlib>
#include <climits>
#include <iomanip>


std::map<std::string, float>    fill_data_in_map(std::ifstream &file);
void load_file_and_search_value(std::ifstream &user_file, std::map<std::string,float>& tabBitcoin);
bool is_negative(std::string& date);

#endif