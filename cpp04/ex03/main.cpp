/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mianni <mianni@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/15 00:06:33 by mianni            #+#    #+#             */
/*   Updated: 2025/03/16 16:39:34 by mianni           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "./inc/IMateriaSource.hpp"
#include "./inc/MateriaSource.hpp"
#include "./inc/AMateria.hpp"
#include "./inc/Ice.hpp"
#include "./inc/Cure.hpp"
#include "./inc/ICharacter.hpp"
#include "./inc/Character.hpp"

// int main() // main du sujet
// {
//     IMateriaSource* src = new MateriaSource();
//     src->learnMateria(new Ice());
//     src->learnMateria(new Cure());
//     ICharacter* me = new Character("me");
//     AMateria* tmp;
//     tmp = src->createMateria("ice");
//     me->equip(tmp);
//     tmp = src->createMateria("cure");
//     me->equip(tmp);
//     ICharacter* bob = new Character("bob");
//     me->use(0, *bob);
//     me->use(1, *bob);
//     delete bob;
//     delete me;
//     delete src;
//     return 0;
// }

int main() { // main plus gros avec + de tests
    IMateriaSource* src = new MateriaSource();
    src->learnMateria(new Ice());
    src->learnMateria(new Cure());

    ICharacter* me = new Character("Player");

    AMateria* tmp;
    tmp = src->createMateria("ice");
    me->equip(tmp);
    tmp = src->createMateria("cure");
    me->equip(tmp);

    ICharacter* bob = new Character("Bob");

    me->use(0, *bob);   // affiche: "* shoots an ice bolt at Bob *"
    me->use(1, *bob);   // affiche: "* heals Bob's wounds *"

    me->unequip(0);
    me->use(0, *bob);
    me->use(1, *bob); 

    delete bob;
    delete me;
    delete src;

    // free des Materias au sol
    Character::clearFloor();

    return 0;
}