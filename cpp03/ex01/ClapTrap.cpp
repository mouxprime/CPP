/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mianni <mianni@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/10 12:14:18 by mianni            #+#    #+#             */
/*   Updated: 2025/03/11 16:12:19 by mianni           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

// ==================== Constructeurs / Destructeur ==================== //

ClapTrap::ClapTrap() {
    std::cout << "ClapTrap: Default constructor called" << std::endl;
}

ClapTrap::ClapTrap(std::string name) {
    _name = name;
    std::cout << "ClapTrap: " << _name << " Created" << std::endl;
}

ClapTrap::ClapTrap(const ClapTrap &other) {
    std::cout << "ClapTrap: " << other._name << " copied" << std::endl;
    this->_name = other._name;
    this->_energypts = other._energypts;
    this->_attackdmg = other._attackdmg;
    this->_health = other._health;    
    *this = other;
}


ClapTrap::~ClapTrap() {
    std::cout << "ClapTrap: Destructor called" << std::endl;
}

// ==================== Opérateur d'affectation ==================== //

ClapTrap &ClapTrap::operator=(const ClapTrap &rhs) {
    std::cout << "ClapTrap: Copy assignment operator called" << std::endl;
    if (this != &rhs){
        this->_name = rhs._name;
        this->_attackdmg = rhs._attackdmg;
        this->_energypts = rhs._energypts;
        this->_health = rhs._health;
    }
    std::cout << "ClapTrap: " << rhs._name << " assigned" << std::endl;
    return *this;
}

// ==================== Fonctions d'action ========================
void ClapTrap::attack(const std::string& target)
{
    if (this->_energypts > 0 || this->_health > 0) {
        std::cout << "ClapTrap: " << this->_name << " attacks " << target << ", causing " << this->_attackdmg << " points of damage!" << std::endl;
        this->_energypts--;
    } else {
        std::cout << "ClapTrap: " << this->_name << " has no energy left to attack!" << std::endl;
    }
}
void ClapTrap::takeDamage(unsigned int amount)
{
    if (this->_health > 0)
        this->_health -= amount; 
    std::cout << "ClapTrap: " << this->_name << " get damage ! Health points = " << this->_health << std::endl;
}
void ClapTrap::beRepaired(unsigned int amount)
{
    std::cout << "ClapTrap: " << _name << " se repare et recupere " << amount << "PV" << std::endl;
    if (this->_energypts > 0) {
        _health += amount;
        this->_energypts--;
    }
    else
        std::cout << "Not enough energy_points for " << this->_name << std::endl;
}
