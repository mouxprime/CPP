/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mianni <mianni@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/10 16:09:37 by mianni            #+#    #+#             */
/*   Updated: 2025/03/11 14:06:13 by mianni           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "ClapTrap.hpp"
#include "ScavTrap.hpp"
#include "FragTrap.hpp"

int main() {
    std::cout << "===== Début du Test FragTrap =====" << std::endl;

    // Création d'un FragTrap
    FragTrap frag("RobotWarrior");

    std::cout << std::endl;

    // Attaque
    frag.attack("Ennemi1");
    frag.attack("Ennemi2");

    std::cout << std::endl;

    // Subir des dégâts
    frag.takeDamage(30);
    frag.takeDamage(40);

    std::cout << std::endl;

    // Réparation
    frag.beRepaired(20);
    
    std::cout << std::endl;

    // Activation de la capacité spéciale
    frag.highFivesGuys();

    std::cout << std::endl;
    std::cout << "===== Fin du Test FragTrap =====" << std::endl;

    return 0;
}
