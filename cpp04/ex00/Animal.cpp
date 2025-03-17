/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mianni <mianni@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/14 11:26:30 by mianni            #+#    #+#             */
/*   Updated: 2025/03/14 14:01:05 by mianni           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"

// ==================== Constructeurs / Destructeur ==================== //

Animal::Animal() : _type("RandomType"){
    std::cout << "Animal: Default constructor called" << std::endl;
}

Animal::Animal(const Animal &other) {
    std::cout << "Animal: Copy constructor called" << std::endl;
    this->_type = other._type;
    *this = other;
}

Animal::~Animal() {
    std::cout << "Animal: Destructor called" << std::endl;
}

// ==================== Opérateur d'affectation ==================== //

Animal &Animal::operator=(const Animal &rhs) {
    std::cout << "Animal: Copy assignment operator called" << std::endl;
    if (this != &rhs)
        this->_type = rhs._type;
    return *this;
}
void Animal::makeSound() const
{
    std::cout << "This is a random sound." << std::endl;
}

std::string Animal::getType() const
{
    return _type;
}