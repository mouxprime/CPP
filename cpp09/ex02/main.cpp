/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mianni <mianni@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/10 14:12:35 by mianni            #+#    #+#             */
/*   Updated: 2025/05/10 15:31:00 by mianni           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PmergeMe.hpp"

int main(int argc, char **argv)
{
    if (argc == 1)
        return std::cerr << "Error: usage -> ./PmergeME <args>" << std::endl, 1;
    int i = 1;
    while (i < argc)
    {
        if (!parsing(argv[i]))
        {
            std::string line = argv[i];
            return std::cerr << "Error: invalid character at: '" << line << "'" << std::endl, 1;
        }
        i++;
    }
    std::vector<int> vec;
    std::deque<int> deq;
    fill_lists(argv, vec, deq);
    merge_and_sort(deq, vec);
    return 0;
}