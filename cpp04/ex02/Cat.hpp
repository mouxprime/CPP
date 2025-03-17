/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mianni <mianni@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/14 11:26:42 by mianni            #+#    #+#             */
/*   Updated: 2025/03/14 17:49:35 by mianni           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CAT_HPP
#define CAT_HPP

#include <iostream>
#include "Animal.hpp"
#include "Brain.hpp"

class Cat : virtual public a_Animal{ 
public:
    Cat();                              // Constructeur par défaut
    Cat(const Cat &other);     // Constructeur de recopie
    Cat &operator=(const Cat &rhs); // Opérateur d'affectation
    ~Cat();                           // Destructeur
    void    makeSound() const;
    
private:
    Brain *CatBrain;
    int _value; // Exemple d'attribut privé
};

#endif // CAT_HPP
