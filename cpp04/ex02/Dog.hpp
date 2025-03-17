/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mianni <mianni@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/14 11:26:49 by mianni            #+#    #+#             */
/*   Updated: 2025/03/14 17:49:41 by mianni           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DOG_HPP
#define DOG_HPP

#include "Animal.hpp"
#include <iostream>
#include "Brain.hpp"

class Dog : virtual public a_Animal{
public:
    Dog();                              // Constructeur par défaut
    Dog(const Dog &other);     // Constructeur de recopie
    Dog &operator=(const Dog &rhs); // Opérateur d'affectation
    ~Dog();                            // Destructeur
    void makeSound() const;
    
private:
    Brain *DogBrain;
    int _value; // Exemple d'attribut privé
};

#endif // DOG_HPP
