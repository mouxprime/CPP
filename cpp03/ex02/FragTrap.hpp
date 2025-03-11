/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mianni <mianni@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/10 16:09:33 by mianni            #+#    #+#             */
/*   Updated: 2025/03/11 16:09:49 by mianni           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FRAGTRAP_HPP
#define FRAGTRAP_HPP

#include <iostream>
#include <string>
#include "ClapTrap.hpp"
#include "ScavTrap.hpp"

class FragTrap : public ClapTrap{
public:
    FragTrap(std::string name);
    FragTrap();
    FragTrap(const FragTrap &other);     // Constructeur de recopie
    FragTrap &operator=(const FragTrap &rhs); // Opérateur d'affectation
    ~FragTrap();                             // Destructeur

    void    highFivesGuys();
private:
};

#endif // FRAGTRAP_HPP
