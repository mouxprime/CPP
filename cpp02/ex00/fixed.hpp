/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mianni <mianni@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/23 19:02:35 by mianni            #+#    #+#             */
/*   Updated: 2025/03/07 15:13:13 by mianni           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
#define FIXED_HPP

#include <iostream>
#include <iomanip>
#include <iostream>

class Fixed {
public:
    Fixed();                      // Constructeur par défaut
    Fixed(const Fixed &other);     // Constructeur de recopie
    Fixed &operator=(const Fixed &rhs); // Opérateur d'affectation
    ~Fixed();                     // Destructeur

    int getRawBits(void) const;    // Retourne la valeur brute
    void setRawBits(int const raw); // Modifie la valeur brute

private:
    int _fixedPointValue;         // Valeur en virgule fixe
    static const int _fractionalBits = 8; // Nombre de bits fractionnaires
};

#endif
