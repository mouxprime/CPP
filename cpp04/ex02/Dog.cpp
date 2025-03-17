/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mianni <mianni@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/14 11:26:46 by mianni            #+#    #+#             */
/*   Updated: 2025/03/14 15:41:52 by mianni           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

// ==================== Constructeurs / Destructeur ==================== //

Dog::Dog() {
    this->_type = "Dog";
    std::cout << "Dog: Default constructor called" << std::endl;
    this->DogBrain = new Brain();
    _value = 0;
}

Dog::Dog(const Dog &other) {
    std::cout << "Dog: Copy constructor called" << std::endl;
    this->DogBrain = new Brain();
    *this = other;
}

Dog::~Dog() {
    std::cout << "Dog: Destructor called" << std::endl;
    delete this->DogBrain;
}

// ==================== Opérateur d'affectation ==================== //

Dog &Dog::operator=(const Dog &rhs) {
    std::cout << "Cat: Copy assignment operator called" << std::endl;
    if (this != &rhs){
        this->_value = rhs._value;
        this->DogBrain = new Brain();
        this->_type = rhs._type; }
    return *this;
}


void    Dog::makeSound() const
{
    std::cout << "The dog 🐶 makes a 'Wooooooooooooof'" << std::endl;
}