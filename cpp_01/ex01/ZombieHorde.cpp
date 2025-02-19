/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ZombieHorde.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mianni <mianni@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/06 11:26:00 by mianni            #+#    #+#             */
/*   Updated: 2025/02/06 11:57:07 by mianni           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

#include "Zombie.hpp"

Zombie* zombieHorde(int N, std::string name)
{
	if (N <= 0)
		return (NULL);

	Zombie* horde = new Zombie[N];
	if (!horde)
		return (NULL);

	int i = 0;
	while (i < N)
	{
		horde[i].setName(name);
        i++;
	}
	return (horde);
}
