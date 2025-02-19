/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mianni <mianni@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/13 17:34:01 by mianni            #+#    #+#             */
/*   Updated: 2025/02/13 17:34:01 by mianni           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"

Weapon::Weapon(std::string name){ // Constructeur parametre
    Weapon::setType(name);
    return ;
}

Weapon::Weapon(){ // Constructeur par default
    return;
}

Weapon::~Weapon(){
    //std::cout << "Weapon has been successfully destroyed" << std::endl;
}

std::string Weapon::getType() const {
    return (Weapon::_type);
}

void Weapon::setType(std::string name){
    Weapon::_type = name;
}