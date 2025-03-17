/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mianni <mianni@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/14 11:26:30 by mianni            #+#    #+#             */
/*   Updated: 2025/03/14 17:44:05 by mianni           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"

// ==================== Constructeurs / Destructeur ==================== //

a_Animal::a_Animal() : _type("RandomType"){
    std::cout << "a_Animal: Default constructor called" << std::endl;
}

a_Animal::a_Animal(const a_Animal &other) {
    std::cout << "a_Animal: Copy constructor called" << std::endl;
    this->_type = other._type;
    *this = other;
}

a_Animal::~a_Animal() {
    std::cout << "a_Animal: Destructor called" << std::endl;
}

// ==================== Opérateur d'affectation ==================== //

a_Animal &a_Animal::operator=(const a_Animal &rhs) {
    std::cout << "a_Animal: Copy assignment operator called" << std::endl;
    if (this != &rhs)
        this->_type = rhs._type;
    return *this;
}
void a_Animal::makeSound() const
{
    std::cout << "This is a random sound." << std::endl;
}

std::string a_Animal::getType() const
{
    return _type;
}