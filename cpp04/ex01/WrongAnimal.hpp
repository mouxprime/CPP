/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mianni <mianni@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/14 14:47:28 by mianni            #+#    #+#             */
/*   Updated: 2025/03/14 14:47:29 by mianni           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WRONGANIMAL_HPP
#define WRONGANIMAL_HPP

#include <iostream>

class WrongAnimal {
public:
    WrongAnimal();                              // Constructeur par défaut
    WrongAnimal(const WrongAnimal &other);     // Constructeur de recopie
    WrongAnimal &operator=(const WrongAnimal &rhs); // Opérateur d'affectation
    virtual ~WrongAnimal(); 
    void makeSound() const;
    std::string getType() const;


private:
    std::string _type; // Exemple d'attribut privé
};

#endif // WRONGANIMAL_HPP
