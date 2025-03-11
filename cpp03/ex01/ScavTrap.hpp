/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mianni <mianni@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/10 13:49:47 by mianni            #+#    #+#             */
/*   Updated: 2025/03/11 16:08:08 by mianni           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SCAVTRAP_HPP
#define SCAVTRAP_HPP

#include <iostream>
#include <string>
#include "ClapTrap.hpp"

class ScavTrap : public ClapTrap {

    public:
    ScavTrap(std::string name); // Constructeur par défaut
    ScavTrap(const ScavTrap &other);     // Constructeur de recopie
    ScavTrap &operator=(const ScavTrap &rhs); // Opérateur d'affectation
    virtual ~ScavTrap();
    void guardGate();

private:
};

#endif // SCAVTRAP_HPP
