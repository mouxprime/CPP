/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mianni <mianni@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/10 16:09:28 by mianni            #+#    #+#             */
/*   Updated: 2025/03/11 16:11:00 by mianni           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"
#include "ClapTrap.hpp"

// ==================== Constructeurs / Destructeur ==================== //
FragTrap::FragTrap()
{
    std::cout << "FragTrap: default constructor called" << std::endl;
}
FragTrap::FragTrap(std::string name) : ClapTrap() {
    std::cout << "FragTrap: Default constructor called" << std::endl;
    _health = 100;
    _energypts = 100;
    _attackdmg = 30;

    std::cout << "FragTrap: " << name << " created !" << std::endl;
}

FragTrap::FragTrap(const FragTrap &other) {
    std::cout << "FragTrap: Copy constructor called" << std::endl;
    *this = other;
}

FragTrap::~FragTrap() {
    std::cout << "FragTrap: Destructor called" << std::endl;
}

// ==================== Opérateur d'affectation ==================== //

FragTrap &FragTrap::operator=(const FragTrap &rhs) {
    std::cout << "FragTrap: Copy assignment operator called" << std::endl;
    if (this != &rhs)
    {
         _health = rhs._health;
        _energypts = rhs._energypts;
        _attackdmg = rhs._attackdmg;
    }
    return *this;
}

void    FragTrap::highFivesGuys()
{
    std::cout << "FragTrap " << ClapTrap::getName() << " high fives !!" << std::endl;
}
