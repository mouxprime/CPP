/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mianni <mianni@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/14 11:26:34 by mianni            #+#    #+#             */
/*   Updated: 2025/03/14 17:49:22 by mianni           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ANIMAL_HPP
#define ANIMAL_HPP

#include <iostream>

class a_Animal {
public:
    a_Animal();                              // Constructeur par défaut
    a_Animal(const a_Animal &other);     // Constructeur de recopie
    a_Animal &operator=(const a_Animal &rhs); // Opérateur d'affectation
    virtual ~a_Animal();                         // Destructeur
    virtual void makeSound() const = 0;
    virtual std::string getType() const;
    
protected:
    std::string _type;
};

#endif 
