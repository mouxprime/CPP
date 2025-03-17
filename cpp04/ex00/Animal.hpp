/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mianni <mianni@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/14 11:26:34 by mianni            #+#    #+#             */
/*   Updated: 2025/03/14 14:12:45 by mianni           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ANIMAL_HPP
#define ANIMAL_HPP

#include <iostream>

class Animal {
public:
    Animal();                              // Constructeur par défaut
    Animal(const Animal &other);     // Constructeur de recopie
    Animal &operator=(const Animal &rhs); // Opérateur d'affectation
    virtual ~Animal();                         // Destructeur
    virtual void makeSound() const;
    std::string getType() const;
    
protected:
    std::string _type;
};

#endif 
