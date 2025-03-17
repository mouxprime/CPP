/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mianni <mianni@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/14 14:49:09 by mianni            #+#    #+#             */
/*   Updated: 2025/03/14 15:30:06 by mianni           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Brain.hpp"

// ==================== Constructeurs / Destructeur ==================== //

Brain::Brain() {
    std::cout << "Brain: Default constructor called" << std::endl;
    _value = 0;
}

Brain::Brain(const Brain &other) {
    std::cout << "Brain: Copy constructor called" << std::endl;
    *this = other;
}

Brain::~Brain() {
    std::cout << "Brain: Destructor called" << std::endl;
}

// ==================== Opérateur d'affectation ==================== //

Brain &Brain::operator=(const Brain &rhs) {
    std::cout << "Brain: Copy assignment operator called" << std::endl;
    if (this != &rhs)
        this->_value = rhs._value;
    return *this;
}
