/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mianni <mianni@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/10 13:49:34 by mianni            #+#    #+#             */
/*   Updated: 2025/03/10 15:54:26 by mianni           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

int main() {
    std::cout << "=== Création d'un ScavTrap ===" << std::endl;
    ScavTrap scavTrap1("Clappy");
    std::cout << std::endl;

    // Test de l'attaque
    std::cout << "=== Test de l'attaque ===" << std::endl;
    scavTrap1.attack("Target");
    std::cout << std::endl;

    // Test du mode "Guard Gate"
    std::cout << "=== Test du mode Guard Gate ===" << std::endl;
    scavTrap1.guardGate();
    std::cout << std::endl;

    // Test du constructeur de copie
    std::cout << "=== Test du constructeur de copie ===" << std::endl;
    ScavTrap scavTrap2 = scavTrap1; // Cela appelle le constructeur de copie
    scavTrap2.attack("Another Target");
    std::cout << std::endl;

    // Test de l'opérateur d'assignation
    std::cout << "=== Test de l'opérateur d'assignation ===" << std::endl;
    ScavTrap scavTrap3("OldScav");
    scavTrap3 = scavTrap1; // Cela appelle l'opérateur d'assignation
    scavTrap3.attack("Yet Another Target");
    std::cout << std::endl;

    // Test de la destruction
    std::cout << "=== Test de la destruction ===" << std::endl;
    {
        ScavTrap scavTrap4("Temporary");
    } // Ici, l'objet `scavTrap4` sera détruit à la fin du bloc, et son destructeur sera appelé
    std::cout << std::endl;

    return 0;
}

