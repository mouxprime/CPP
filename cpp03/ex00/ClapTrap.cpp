/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mianni <mianni@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/10 12:14:18 by mianni            #+#    #+#             */
/*   Updated: 2025/03/11 14:09:30 by mianni           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

// ==================== Constructeurs / Destructeur ==================== //

ClapTrap::ClapTrap(const std::string _name) {
    std::cout << "ClapTrap: Default constructor called" << std::endl;
    this->_name = _name;
    _energypts = 10;
    _attackdmg = 0;
    _health = 10;
}

ClapTrap::ClapTrap(const ClapTrap &other) {
    std::cout << "ClapTrap: " << other._name << "copied" << std::endl;
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
// ==================== Getters & Setters =========================
unsigned int ClapTrap::getEnergyPts() const {
    return _energypts;
}

void ClapTrap::setEnergyPts(unsigned int energyPts) {
    _energypts = energyPts;
}

unsigned int ClapTrap::getAttackDmg() const {
    return _attackdmg;
}

void ClapTrap::setAttackDmg(unsigned int attackDmg) {
    _attackdmg = attackDmg;
}

unsigned int ClapTrap::getHealth() const {
    return _health;
}

void ClapTrap::setHealth(unsigned int health) {
    _health = health;
}
// ==================== Fonctions d'action ========================
void ClapTrap::attack(const std::string& target)
{
    if (this->getEnergyPts() > 0 || this->getHealth() > 0) {
        std::cout << "ClapTrap: " << this->_name << " attacks " << target << ", causing " << this->_attackdmg << " points of damage!" << std::endl;
        this->setEnergyPts(this->getEnergyPts() - 1);
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
    if (this->getEnergyPts() > 0) {
        _health += amount;
        this->setEnergyPts(this->getEnergyPts() - 1);
    }
    else
        std::cout << "Not enough energy_points for " << this->_name << std::endl;
}
