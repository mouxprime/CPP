/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mianni <mianni@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/14 14:47:17 by mianni            #+#    #+#             */
/*   Updated: 2025/03/14 14:47:18 by mianni           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongCat.hpp"

// ==================== Constructeurs / Destructeur ==================== //

WrongCat::WrongCat() {
    std::cout << "WrongCat: Default constructor called" << std::endl;
    _type = "WrongCat";
}

WrongCat::WrongCat(const WrongCat &other) {
    std::cout << "WrongCat: Copy constructor called" << std::endl;
    *this = other;
}

WrongCat::~WrongCat() {
    std::cout << "WrongCat: Destructor called" << std::endl;
}

// ==================== Opérateur d'affectation ==================== //

WrongCat &WrongCat::operator=(const WrongCat &rhs) {
    std::cout << "WrongCat: Copy assignment operator called" << std::endl;
    if (this != &rhs)
        this->_type = rhs._type;
    return *this;
}

void WrongCat::makeSound() const
{
    std::cout << "The cat 🐱 makes a [WRONG]'Miaaaaaouuu'" << std::endl;
}

std::string WrongCat::getType() const
{
    return _type;
}