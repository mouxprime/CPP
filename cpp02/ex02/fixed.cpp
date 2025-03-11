/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mianni <mianni@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/23 19:03:38 by mianni            #+#    #+#             */
/*   Updated: 2025/03/07 15:09:23 by mianni           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fixed.hpp"

// ==================== Constructeurs / Destructeur ==================== //

Fixed::Fixed() {
    //std::cout << "Default constructor called" << std::endl;
    _attribute = 0;
}

Fixed::Fixed(const int nb) {
    //std::cout << "Int constructor called" << std::endl;
    _attribute = nb << _raw_bits;
}

Fixed::Fixed(const float nb) {
    //std::cout << "Float constructor called" << std::endl;
    _attribute = static_cast<int>(roundf(nb * (1 << _raw_bits)));
}

Fixed::Fixed(const Fixed &other) {
   // std::cout << "Copy constructor called" << std::endl;
    *this = other;
}

Fixed::~Fixed() {
    //std::cout << "Destructor called" << std::endl;
}

// ==================== Opérateur d'affectation ==================== //

Fixed &Fixed::operator=(const Fixed &other) {
    //std::cout << "Copy assignment operator called" << std::endl;
    if (this != &other) {
        this->_attribute = other._attribute;
    }
    return *this;
}

// ==================== Conversion ==================== //

float Fixed::toFloat(void) const {
    return static_cast<float>(_attribute) / (1 << _raw_bits);
}

int Fixed::toInt(void) const {
    return _attribute >> _raw_bits;
}

// ==================== Accesseurs ==================== //

int Fixed::getRawBits(void) const {
    //std::cout << "getRawBits member function called" << std::endl;
    return _attribute;
}

void Fixed::setRawBits(int const raw) {
    _attribute = raw;
}

// ==================== Opérateur d'affichage ==================== //

std::ostream &operator<<(std::ostream &out, const Fixed &fixed) {
    out << fixed.toFloat();
    return out;
}

// ==================== Opérateurs de Comparaison ==================== //

bool Fixed::operator>(const Fixed &other) const {
    return this->_attribute > other._attribute;
}

bool Fixed::operator<(const Fixed &other) const {
    return this->_attribute < other._attribute;
}

bool Fixed::operator>=(const Fixed &other) const {
    return this->_attribute >= other._attribute;
}

bool Fixed::operator<=(const Fixed &other) const {
    return this->_attribute <= other._attribute;
}

bool Fixed::operator==(const Fixed &other) const {
    return this->_attribute == other._attribute;
}

bool Fixed::operator!=(const Fixed &other) const {
    return this->_attribute != other._attribute;
}

// ==================== Opérateurs Arithmétiques ==================== //

Fixed Fixed::operator+(const Fixed &other) const {
    return Fixed(this->toFloat() + other.toFloat());
}

Fixed Fixed::operator-(const Fixed &other) const {
    return Fixed(this->toFloat() - other.toFloat());
}

Fixed Fixed::operator*(const Fixed &other) const {
    return Fixed(this->toFloat() * other.toFloat());
}

Fixed Fixed::operator/(const Fixed &other) const {
    if (other.toFloat() == 0) {
        std::cerr << "Error: Division by zero!" << std::endl;
        return Fixed(0);
    }
    return Fixed(this->toFloat() / other.toFloat());
}

// ==================== Opérateurs d'Incrémentation et Décrémentation ==================== //

Fixed &Fixed::operator++() { // Pré-incrémentation (++x)
    _attribute++;
    return *this;
}

Fixed Fixed::operator++(int) { // Post-incrémentation (x++)
    Fixed temp(*this);
    _attribute++;
    return temp;
}

Fixed &Fixed::operator--() { // Pré-décrémentation (--x)
    _attribute--;
    return *this;
}

Fixed Fixed::operator--(int) { // Post-décrémentation (x--)
    Fixed temp(*this);
    _attribute--;
    return temp;
}

// ==================== Fonctions Min et Max ==================== //

Fixed &Fixed::min(Fixed &a, Fixed &b) {
    return (a < b) ? a : b;
}

const Fixed &Fixed::min(const Fixed &a, const Fixed &b) {
    return (a < b) ? a : b;
}

Fixed &Fixed::max(Fixed &a, Fixed &b) {
    return (a > b) ? a : b;
}

const Fixed &Fixed::max(const Fixed &a, const Fixed &b) {
    return (a > b) ? a : b;
}
