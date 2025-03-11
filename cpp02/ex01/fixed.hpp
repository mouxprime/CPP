/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mianni <mianni@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/23 19:02:35 by mianni            #+#    #+#             */
/*   Updated: 2025/03/07 14:38:54 by mianni           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef COPILEN_HPP
#define COPILEN_HPP

#include <string>
#include <iomanip>
#include <iostream>

class Fixed {
    
public:

    Fixed();                                  // Constructeur par défaut
    Fixed(const Fixed & other);            // Constructeur de recopie
    Fixed &operator=(const Fixed &other); // Opérateur d'affectation
    Fixed(const int nb);
    Fixed(const float nb);
    ~Fixed();                             // Destructeur
    
    int getRawBits();
    int _get_attribute();
    float toFloat(void) const;
    int toInt( void ) const;
    
private:
    static const int _raw_bits = 8; // valeur fractionnaire, tjrs a 8
    int _attribute; // valeur brute du nb
};

std::ostream &operator<<(std::ostream &out, const Fixed &fixed);

#endif