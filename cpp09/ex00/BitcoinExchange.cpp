/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   BitcoinExchange.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mianni <mianni@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/05 12:38:00 by mianni            #+#    #+#             */
/*   Updated: 2025/05/09 14:55:52 by mianni           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "BitcoinExchange.hpp"

std::map<std::string, float> fill_data_in_map(std::ifstream &file) // ok, fonction verifiee
{
    std::string line;
    std::map<std::string, float>  tabBitcoin;

    std::getline(file, line);
    while (std::getline(file, line)) // remplissage de tabBitcoin
    {
        std::stringstream ss(line);
        std::string date, strValue;
        
        if (std::getline(ss, date, ',') && std::getline(ss, strValue))
        {
            std::stringstream vs(strValue);
            float value = 0.0f;
            vs >> value;
            tabBitcoin.insert(std::make_pair(date, value));
        }
        else {
            std::cerr << "Error, bad line format:" << line << std::endl;
        }
    }
    return tabBitcoin;
}

bool is_negative(std::string& date)
{
        int y, m, d;
        char sep1, sep2;
        std::istringstream ss(date);
        if (!(ss >> y >> sep1 >> m >> sep2 >> d))
            return false;
        if (sep1 != '-' || sep2 != '-')
            return false;
        if (m < 1 || m > 12)
            return false;
        if (d < 1 || d > 31)
            return false;
        return true;
}

float  find_value(std::string date, std::map<std::string, float>& tabBitcoin)
{    
    std::map<std::string, float>::iterator it = tabBitcoin.lower_bound(date);
    if (it != tabBitcoin.end() && it->first == date)
        return it->second;
    if (it == tabBitcoin.begin())
        return -1;
    it--;
    return it->second;
}

void load_file_and_search_value(std::ifstream &user_file, std::map<std::string, float>& tabBitcoin)
{
    (void)tabBitcoin;
    std::string line;
    std::getline(user_file, line);
    while (std::getline(user_file, line))
    {
        std::string date = line.substr(0, 10);
        if (!is_negative(date))
            std::cerr << "Error: bad imput => " << date << std::endl;
        // float quantity = std::atof(line.substr(12, line.size() - 12).c_str());
        // std::cout << "quantity=" << quantity << std::endl;

        else
        {
            float result = find_value(date, tabBitcoin); // ici c'est une string en param
            float result_user_file = atof(line.substr(12, line.size() - 12).c_str());
            if (result_user_file >= 2147483647.0f)
                std::cout << "Error: too large number" << std::endl;
            else if (result_user_file < 0 || result < 0)
                std::cout << "Error: Not a positive number." << std::endl;
            else
                std::cout << date << " => " << result_user_file << " = " << result * result_user_file << std::endl;
        }
    }
}