/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mianni <mianni@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/14 11:26:38 by mianni            #+#    #+#             */
/*   Updated: 2025/03/14 14:13:45 by mianni           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

// ==================== Constructeurs / Destructeur ==================== //

Cat::Cat() {
    this->_type = "Cat";
    std::cout << "Cat: Default constructor called" << std::endl;
    _value = 0;
}

Cat::Cat(const Cat &other) {
    std::cout << "Cat: Copy constructor called" << std::endl;
    *this = other;
}

Cat::~Cat() {
    std::cout << "Cat: Destructor called" << std::endl;
}

// ==================== Opérateur d'affectation ==================== //

Cat &Cat::operator=(const Cat &rhs) {
    std::cout << "Cat: Copy assignment operator called" << std::endl;
    if (this != &rhs)
        this->_value = rhs._value;
    return *this;
}

void    Cat::makeSound() const
{
    std::cout << "The cat 🐱 makes a 'Miaaaaaouuu'" << std::endl;
}