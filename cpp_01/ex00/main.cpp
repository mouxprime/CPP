/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mianni <mianni@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/29 14:35:53 by mianni            #+#    #+#             */
/*   Updated: 2025/02/13 11:49:29 by mianni           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie	*newZombie(std::string name);
void	randomChump(std::string name);

int	main(void)
{
	std::cout << "----------- StackZombies --------------" << std::endl;
	Zombie	zombie1("Zombie1");
	Zombie	zombie2("Zombie2");
	Zombie	zombie3;

	zombie1.announce();
	zombie2.announce();
	zombie3.announce();
	randomChump("randomChumpZ");

	std::cout << std::endl;
	std::cout << "---------------- HeapZombies ----------------" << std::endl;
	Zombie	*heapZ;

	heapZ = newZombie("HeapZ");
	heapZ->announce();
	delete(heapZ);

	return (0);
}