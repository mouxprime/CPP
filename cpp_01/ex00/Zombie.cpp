/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mianni <mianni@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/29 14:36:08 by mianni            #+#    #+#             */
/*   Updated: 2025/02/13 11:50:41 by mianni           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie::Zombie() : _name("Zombie"){
    return;
}

Zombie::Zombie(std::string name) : _name(name){
    return;
}

Zombie::~Zombie(){
    std::cout << _name << " is dead (for good this time)" << std::endl;
    return;
}

void Zombie::announce(void) const // annonceur
{
    std::cout << _name << ": BraiiiiiiinnnzzzZ..." << std::endl;
}

void Zombie::setName(std::string name)
{
	_name = name;
}
