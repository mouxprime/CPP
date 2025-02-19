/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mianni <mianni@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/17 22:05:45 by mianni            #+#    #+#             */
/*   Updated: 2025/02/19 18:48:46 by mianni           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "harl.hpp" 

int main ()
{
	std::string line;
	Harl new_harl = Harl();
	while (1)
	{
		std::cout << "Entrez un niveau d'alerte 1 - 4. 'q' = exit(0)" << std::endl;
		if (!(std::cin >> line))
			break;
		if (line == "q")
			break;
		new_harl.complain(line);
	}
}