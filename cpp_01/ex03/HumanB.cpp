/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mianni <mianni@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/13 17:34:14 by mianni            #+#    #+#             */
/*   Updated: 2025/02/13 17:34:14 by mianni           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanB.hpp"

void HumanB::setName(std::string name)
{
    HumanB::_name = name;
    return;
}
std::string HumanB::get_name()
{
    return (HumanB::_name);
}

HumanB::HumanB(std::string name) : _name(name), _Weapon2(NULL)
{
    HumanB::setName(name);
    std::cout << "HumanB sucessfully built" << std::endl;
    return;
}

HumanB::~HumanB()
{
    std::cout << "HumanB successfully destroyed\n" << std::endl;
    return;
}

void HumanB::attack()
{
    std::string name;
    std::string type;

    if (HumanB::_Weapon2 == NULL)
    {
        std::cout << "HumanB has no weapon" << std::endl;
        return ;
    }
    name = get_name();
    type = _Weapon2->getType();
    std::cout << name << " attacks with their " << type << std::endl;
    return ;
}

void HumanB::setWeapon(Weapon& w)
{
    HumanB::_Weapon2 = &w;
}