/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mianni <mianni@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/14 14:47:47 by mianni            #+#    #+#             */
/*   Updated: 2025/03/14 14:47:48 by mianni           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongAnimal.hpp"

// ==================== Constructeurs / Destructeur ==================== //

WrongAnimal::WrongAnimal() {
    std::cout << "WrongAnimal: Default constructor called" << std::endl;
    _type = "WrongAnimal";
}

WrongAnimal::WrongAnimal(const WrongAnimal &other) {
    std::cout << "WrongAnimal: Copy constructor called" << std::endl;
    *this = other;
}

WrongAnimal::~WrongAnimal() {
    std::cout << "WrongAnimal: Destructor called" << std::endl;
}

// ==================== Opérateur d'affectation ==================== //

WrongAnimal &WrongAnimal::operator=(const WrongAnimal &rhs) {
    std::cout << "WrongAnimal: Copy assignment operator called" << std::endl;
    if (this != &rhs)
        this->_type = rhs._type;
    return *this;
}

void WrongAnimal::makeSound() const
{
    std::cout << "This is a [WRONG]random sound." << std::endl;
}

std::string WrongAnimal::getType() const
{
    return _type;
}