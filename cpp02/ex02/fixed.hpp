/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mianni <mianni@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/23 19:02:35 by mianni            #+#    #+#             */
/*   Updated: 2025/03/07 15:08:18 by mianni           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef COPILEN_HPP
#define COPILEN_HPP

#include <string>
#include <iomanip>
#include <iostream>
#include <cmath>

class Fixed {
    
public:

    Fixed();                                  // Constructeur par défaut
    Fixed(const Fixed & other);            // Constructeur de recopie
    Fixed &operator=(const Fixed &other); // Opérateur d'affectation
    Fixed(const int nb);
    Fixed(const float nb);
    ~Fixed();                             // Destructeur
    
    int getRawBits() const;
    int _get_attribute();
    float toFloat(void) const;
    int toInt( void ) const;
	void setRawBits(int const raw);
    // Opérateurs de comparaison
    bool operator>(const Fixed &other) const;
    bool operator<(const Fixed &other) const;
    bool operator>=(const Fixed &other) const;
    bool operator<=(const Fixed &other) const;
    bool operator==(const Fixed &other) const;
    bool operator!=(const Fixed &other) const;

	// Opérateurs arithmétiques
	Fixed operator+(const Fixed &other) const;
	Fixed operator-(const Fixed &other) const;
	Fixed operator*(const Fixed &other) const;
	Fixed operator/(const Fixed &other) const;
	
	// Opérateurs d'incrémentation/décrémentation
	Fixed &operator++();   // Pré-incrémentation
	Fixed operator++(int); // Post-incrémentation
	Fixed &operator--();   // Pré-décrémentation
	Fixed operator--(int); // Post-décrémentation
		
	// Fonctions min/max
	static Fixed &min(Fixed &a, Fixed &b);
	static const Fixed &min(const Fixed &a, const Fixed &b);
	static Fixed &max(Fixed &a, Fixed &b);
	static const Fixed &max(const Fixed &a, const Fixed &b);

private:
    static const int _raw_bits = 8; // valeur fractionnaire, tjrs a 8
    int _attribute; // valeur brute du nb
};

std::ostream &operator<<(std::ostream &out, const Fixed &fixed);

#endif