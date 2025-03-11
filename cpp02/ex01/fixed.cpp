/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mianni <mianni@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/23 19:03:38 by mianni            #+#    #+#             */
/*   Updated: 2025/03/07 14:43:23 by mianni           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fixed.hpp"

Fixed::Fixed()
{
	std::cout << "Default constructor called" << std::endl;
	_attribute = 0;
}

Fixed::Fixed(const float nb) {
    std::cout << "Float constructor called" << std::endl;
    _attribute = static_cast<int>(nb * (1 << _raw_bits) + 0.5f);
}
Fixed::Fixed(const int nb) {
	std::cout << "Int constructor called" << std::endl;
	_attribute = nb << _raw_bits;
}
Fixed::Fixed (const Fixed & other)
{
	std::cout << "Copy constructor called" << std::endl;
	*this = other;
}

int Fixed::toInt(void) const {
    return this->_attribute >> this->_raw_bits;
}

int	Fixed::_get_attribute(void) {
	return (_attribute);
}

int	Fixed::getRawBits(void) {
	std::cout << "getRawBits member function called" << std::endl;
	return (_raw_bits);
}

float Fixed::toFloat(void) const {
	
    return (float)this->_attribute / (1 << this->_raw_bits);
}
Fixed::~Fixed()
{
	std::cout << "Destructor called" << std::endl;
}

std::ostream &operator<<(std::ostream &out, const Fixed &fixed) {
    out << fixed.toFloat(); // Affiche la valeur en flottant
    return out;
}

Fixed &Fixed::operator=(const Fixed &other) 
{
    std::cout << "Copy assignment operator called" << std::endl;
    if (this != &other) {
        this->_attribute = other._attribute;
    }
    return *this;
}
