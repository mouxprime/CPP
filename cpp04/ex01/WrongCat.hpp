/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mianni <mianni@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/14 14:47:22 by mianni            #+#    #+#             */
/*   Updated: 2025/03/14 14:47:23 by mianni           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WRONGCAT_HPP
#define WRONGCAT_HPP

#include <iostream>
#include "WrongAnimal.hpp"

class WrongCat : public WrongAnimal { 
public:
    WrongCat();                              // Constructeur par défaut
    WrongCat(const WrongCat &other);     // Constructeur de recopie
    WrongCat &operator=(const WrongCat &rhs); // Opérateur d'affectation
    ~WrongCat();                             // Destructeur
    virtual void makeSound() const;
    std::string getType() const;


private:
    std::string _type; // Exemple d'attribut privé
};

#endif // WRONGCAT_HPP
