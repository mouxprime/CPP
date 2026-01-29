/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mianni <mianni@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/05 12:37:53 by mianni            #+#    #+#             */
/*   Updated: 2025/05/08 22:58:49 by mianni           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "BitcoinExchange.hpp"

int main(int argc, char **argv)
{
    if (argc != 2) {
        std::cerr << "Usage: ./btc <filename>" << std::endl;
        return EXIT_FAILURE;
    }
    std::ifstream data_csv("data.csv");
    std::ifstream user_file(argv[1]);
    if (!data_csv.is_open() || !user_file.is_open())
        return std::invalid_argument("Error: could not open file."), EXIT_FAILURE;
    std::map<std::string, float> tabBitcoin = fill_data_in_map(data_csv);
    load_file_and_search_value(user_file, tabBitcoin);
    return (0);
}