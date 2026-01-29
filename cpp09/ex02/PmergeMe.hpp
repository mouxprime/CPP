/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PmergeMe.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mianni <mianni@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/10 14:12:26 by mianni            #+#    #+#             */
/*   Updated: 2025/05/10 15:30:48 by mianni           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PmergeMe_HPP
#define PmergeMe_HPP

#include <iostream>
#include <sstream>
#include <string>
#include <vector>
#include <deque>
#include <cstdlib>
#include <cctype>
#include <ctime>
#include <algorithm>
#include <sys/time.h>


bool    parsing(std::string line);
void    fill_lists(char **argv, std::vector<int>& vec, std::deque<int>& deq);
void    mergeInsertDeque(std::deque<int>& deq);
void    mergeInsertVector(std::vector<int>& vec);
void    merge_and_sort(std::deque<int> deq, std::vector<int> vec);


#endif