/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PmergeMe.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mianni <mianni@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/10 14:12:30 by mianni            #+#    #+#             */
/*   Updated: 2025/05/10 15:36:08 by mianni           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PmergeMe.hpp"

bool    parsing(std::string line)
{
    std::string::iterator it = line.begin();
    while (it != line.end())
    {
        if (!std::isdigit(*it))
            return false;
        it++;
    }
    return (true);
}

void    fill_lists(char **argv, std::vector<int>& vec, std::deque<int>& deq)
{
    int i = 0;
    while (argv[i])
    {
        int value = atoi(argv[i]);
        vec.push_back(value);
        deq.push_back(value);
        i++;
    }
    std::cout << "Before:\t";
    for (std::vector<int>::const_iterator it = vec.begin(); it != vec.end(); ++it)
        std::cout << *it << ' ';
    std::cout << std::endl;
}

void mergeInsertVector(std::vector<int>& vec)
{
    std::size_t size = vec.size();
    if (size <= 1)
        return;
    std::vector<int> large; large.reserve((size + 1) / 2);
    std::vector<int> small; small.reserve(size / 2);
    bool impair = (size % 2 != 0);
    int imp_value = 0;

    for (std::size_t i = 0; i + 1 < size; i += 2)
    {
        if (vec[i] >= vec[i + 1]) {
            large.push_back(vec[i]);
            small.push_back(vec[i + 1]);
        } else {
            large.push_back(vec[i + 1]);
            small.push_back(vec[i]);
        }
    }
    if (impair)
        imp_value = vec[size - 1];
    std::sort(large.begin(), large.end());
    for (std::size_t i = 0; i < small.size(); ++i)
    {
        std::vector<int>::iterator pos =
            std::lower_bound(large.begin(), large.end(), small[i]);
        large.insert(pos, small[i]);
    }
    if (impair)
    {
        std::vector<int>::iterator pos =
            std::lower_bound(large.begin(), large.end(), imp_value);
        large.insert(pos, imp_value);
    }
    vec.swap(large);
}

void mergeInsertDeque(std::deque<int>& deq)
{
    std::size_t size = deq.size();
    if (size <= 1)
        return;

    std::deque<int> large;
    std::deque<int> small;
    bool impair = (size % 2 != 0);
    int imp_value = 0;

    for (std::size_t i = 0; i + 1 < size; i += 2)
    {
        if (deq[i] >= deq[i + 1]) {
            large.push_back(deq[i]);
            small.push_back(deq[i + 1]);
        } else {
            large.push_back(deq[i + 1]);
            small.push_back(deq[i]);
        }
    }
    if (impair)
        imp_value = deq[size - 1];

    std::sort(large.begin(), large.end());

    for (std::size_t i = 0; i < small.size(); ++i)
    {
        std::deque<int>::iterator pos =
            std::lower_bound(large.begin(), large.end(), small[i]);
        large.insert(pos, small[i]);
    }

    if (impair)
    {
        std::deque<int>::iterator pos =
            std::lower_bound(large.begin(), large.end(), imp_value);
        large.insert(pos, imp_value);
    }
    deq.swap(large);
    std::cout << "After:\t";
    for (std::deque<int>::const_iterator it = deq.begin(); it != deq.end(); ++it)
        std::cout << *it << ' ';
    std::cout << std::endl;
}

void    merge_and_sort(std::deque<int> deq, std::vector<int> vec)
{
    struct timeval t1, t2;
    gettimeofday(&t1, NULL);
    mergeInsertDeque(deq);
    gettimeofday(&t2, NULL);
    long time = (t2.tv_sec  - t1.tv_sec)  * 1000000L + (t2.tv_usec - t1.tv_usec);
    std::cout << "Time to process a range of " << deq.size()
              << " elements with std::deque  : " << time << " µs\n";
    struct timeval t1_bis, t2_bis;
    gettimeofday(&t1_bis, NULL);
    mergeInsertVector(vec);
    gettimeofday(&t2_bis, NULL);
    time = (t2_bis.tv_sec  - t1_bis.tv_sec)  * 1000000L + (t2_bis.tv_usec - t1_bis.tv_usec);
    std::cout << "Time to process a range of " << deq.size()
        << " elements with std::vector  : " << time << " µs\n";
}