/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   harl.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mianni <mianni@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/17 22:16:07 by mianni            #+#    #+#             */
/*   Updated: 2025/02/19 18:56:50 by mianni           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HARL_HPP
#define HARL_HPP

#include <string>
#include <iostream>
#include <fstream>
#include <cstdlib>

class Harl
{
	public:

	Harl(); // constructeur sans arg
	Harl(std::string level); // avec arg
	~Harl();
	void complain( std::string levels ){

		int nb = atoi(levels.c_str()) - 1;
		std::string level[] = {"DEBUG", "INFO", "WARNING", "ERROR"};
		void (Harl::*func[])() = {&Harl::DEBUG, &Harl::INFO, &Harl::WARNING, &Harl::ERROR};
		int	i;
		for (i = 0; i < 4; i++)
		{
			if (i == nb){
				(this->*func[i])();
				return; }
		}
		std::cout << "Error, please enter a number between 1 & 4" << std::endl;
	}

	private:
	
	void	DEBUG() {
		std::cout << "\033[1m[DEBUG]\033[0m" << std::endl;
		std::cout << "debug_lvl" << std::endl; 
	}
	void	INFO() {
		std::cout << "\033[1m[INFO]\033[0m" << std::endl;
		std::cout << "info_lvl" << std::endl;
	}
	void	WARNING() {
		std::cout << "\033[1m[WARNING]\033[0m" << std::endl;
		std::cout << "warning_lvl" << std::endl;
	}
	void	ERROR() {
		std::cout << "\033[1m[ERROR]\033[0m" << std::endl;
		std::cout << "error_lvl" << std::endl;
	}
};

#endif