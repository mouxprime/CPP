/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mianni <mianni@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/14 14:49:13 by mianni            #+#    #+#             */
/*   Updated: 2025/03/14 14:49:44 by mianni           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BRAIN_HPP
#define BRAIN_HPP

#include <iostream>

class Brain {
public:
    Brain();                              // Constructeur par défaut
    Brain(const Brain &other);     // Constructeur de recopie
    Brain &operator=(const Brain &rhs); // Opérateur d'affectation
    ~Brain();                             // Destructeur

private:
    std::string ideas[100];
    int _value; // Exemple d'attribut privé
};

#endif // BRAIN_HPP
