/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mianni <mianni@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/13 17:34:19 by mianni            #+#    #+#             */
/*   Updated: 2025/02/13 17:34:19 by mianni           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
# ifndef HUMANA_HPP
# define HUMANA_HPP

#include "HumanA.hpp"

std::string HumanA::get_name()
{
    return (HumanA::_name);
}
HumanA::HumanA(std::string name, Weapon& W) : Weapon1(W), _name(name)
{
    std::cout << "HumanA successfully built" << std::endl;
}

HumanA::~HumanA()
{
    std::cout << "HumanA successfully destroyed\n" << std::endl;
    return;
}

void HumanA::attack()
{
    std::string name;
    std::string type;

    name = get_name();
    type = Weapon1.getType();
    std::cout << name << " attacks with their " << type << std::endl;
    return ;
}

#endif