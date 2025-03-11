/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mianni <mianni@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/17 22:05:45 by mianni            #+#    #+#             */
/*   Updated: 2025/02/21 13:38:37 by mianni           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "harl.hpp" 

enum	level {DEBUG, INFO, WARNING, ERROR, UNKNOWN};

level get_level(std::string level)
{
	if (level == "1") return DEBUG;
    if (level == "2") return INFO;
    if (level == "3") return WARNING;
    if (level == "4") return ERROR;
	else
		return (UNKNOWN);
}
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
		switch (get_level(line))
		{
			case DEBUG:
				new_harl.complain("1");
				// fallthrough
			case INFO:
				new_harl.complain("2");
				// fallthrough
			case WARNING:
				new_harl.complain("3");
				// fallthrough
			case ERROR:
				new_harl.complain("4");
				break;
			default:
				std::cout << "[ Probably complaining about insignificant problems ]" << std::endl;
				break;
		}
	}
}