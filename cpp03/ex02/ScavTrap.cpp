/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mianni <mianni@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/10 13:49:43 by mianni            #+#    #+#             */
/*   Updated: 2025/03/11 16:07:57 by mianni           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

// ==================== Constructeurs / Destructeur ==================== //

ScavTrap::ScavTrap(std::string name) : ClapTrap(name) {
    std::cout << "ScavTrap: Default constructor called" << std::endl;
    _health = 100;
    _energypts = 100;
    _attackdmg = 20;
    std::cout << "ScavTrap: " << name << " created !" << std::endl;
}

ScavTrap::ScavTrap(const ScavTrap &other) : ClapTrap(other) {
    std::cout << "ScavTrap: Copy constructor called" << std::endl;

    _name = (other._name);
    _energypts = (other._energypts);
    _attackdmg = (other._attackdmg);
    _health = (other._health);
}


ScavTrap::~ScavTrap() {
    std::cout << "ScavTrap: " << ClapTrap::getName() << " Destructor called" << std::endl;
    ClapTrap::~ClapTrap();
}

// ==================== Opérateur d'affectation ==================== //

ScavTrap& ScavTrap::operator=(const ScavTrap &rhs) {
    std::cout << "ScavTrap: Copy assignment operator called" << std::endl;
    if (this != &rhs) {
        _name = (rhs._name);
        _energypts = (rhs._energypts);
        _attackdmg = (rhs._attackdmg);
        _health = (rhs._health);
    }
    return *this;
}


void    ScavTrap::guardGate()
{
    std::cout << "ScavTrap: " << ClapTrap::getName() << " is now in Gate keeper mode" << std::endl;
}

