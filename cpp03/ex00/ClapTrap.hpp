/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mianni <mianni@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/10 13:25:59 by mianni            #+#    #+#             */
/*   Updated: 2025/03/10 13:26:00 by mianni           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CLAPTRAP_HPP
#define CLAPTRAP_HPP

#include <iostream>

class ClapTrap {
public:
    ClapTrap(const std::string _name);                              // Constructeur par défaut
    ClapTrap(const ClapTrap &other);     // Constructeur de recopie
    ClapTrap &operator=(const ClapTrap &rhs); // Opérateur d'affectation
    ~ClapTrap();
    void attack(const std::string& target);
    void takeDamage(unsigned int amount);
    void beRepaired(unsigned int amount);                             // Destructeur

    // Getters
    unsigned int getHealth() const;
    unsigned int getEnergyPts() const;
    unsigned int getAttackDmg() const;

    // Setters
    void setHealth(unsigned int health);
    void setEnergyPts(unsigned int energyPts);
    void setAttackDmg(unsigned int attackDmg);

private:
    std::string _name;
    unsigned int _health;
    unsigned int _energypts;
    unsigned int _attackdmg;
};;

#endif // CLAPTRAP_HPP
