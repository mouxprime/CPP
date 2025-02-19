/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mianni <mianni@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/06 11:36:52 by mianni            #+#    #+#             */
/*   Updated: 2025/02/06 11:55:15 by mianni           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int main(void)
{
	int		N = 5;
	std::string name = "Zombie";
	Zombie* horde = zombieHorde(N, name);
	int		i = 0;

	while (i < N)
	{
		horde[i].announce();
		i++;
	}
	delete[] horde;
	return (0);
}
