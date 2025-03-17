/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mianni <mianni@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/14 14:16:16 by mianni            #+#    #+#             */
/*   Updated: 2025/03/14 14:43:43 by mianni           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"
#include "Cat.hpp"
#include "Dog.hpp"
#include "WrongAnimal.hpp"
#include "WrongCat.hpp"


void testBasicAnimals()
{
    std::cout << "===== TEST 1: Création et destruction de Animal, Dog et Cat =====" << std::endl;

    const Animal* meta = new Animal();
    const Animal* doggo = new Dog();
    const Animal* kitty = new Cat();

    std::cout << "Type de l’animal meta : " << meta->getType() << std::endl;
    std::cout << "Type de l’animal doggo : " << doggo->getType() << std::endl;
    std::cout << "Type de l’animal kitty : " << kitty->getType() << std::endl;

    std::cout << "Sounds:" << std::endl;
    meta->makeSound();
    doggo->makeSound();
    kitty->makeSound();

    delete meta;
    delete doggo;
    delete kitty;
}

void testWrongAnimals()
{
    std::cout << "\n===== TEST 2: Classe WrongAnimal et absence de polymorphisme =====" << std::endl;

    const WrongAnimal* wrongMeta = new WrongAnimal();
    const WrongAnimal* wrongKitty = new WrongCat();

    std::cout << "Type de wrongMeta : " << wrongMeta->getType() << std::endl;
    std::cout << "Type de wrongKitty : " << wrongKitty->getType() << std::endl;

    std::cout << "Sounds (sans polymorphisme) :" << std::endl;
    wrongMeta->makeSound();  // Doit afficher un son générique
    wrongKitty->makeSound(); // Devrait afficher un son générique car méthode non virtuelle

    delete wrongMeta;
    delete wrongKitty;
}



int main()
{
    testBasicAnimals();
    testWrongAnimals();

    std::cout << "\n===== TOUS LES TESTS ONT RÉUSSI =====" << std::endl;
    return 0;
}

