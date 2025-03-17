/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mianni <mianni@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/14 21:16:29 by mianni            #+#    #+#             */
/*   Updated: 2025/03/15 17:35:04 by mianni           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CHARACTER_HPP
#define CHARACTER_HPP

#include "ICharacter.hpp"
#include "AMateria.hpp"

class Character : public ICharacter {
private:
    std::string _name;
    AMateria* _inventory[4];             // Inventaire de 4 slots de Materia

    static AMateria* _floor[100];        // Stockage statique des Materias lâchées (au sol)
    static int _floorCount;             // Nombre d’objets actuellement au sol

public:
    Character(std::string const & name);
    Character(Character const & other);
    Character & operator=(Character const & other);
    virtual ~Character();

    std::string const & getName() const;
    void equip(AMateria* m);
    void unequip(int idx);
    void use(int idx, ICharacter& target);
    AMateria* clone() const;

    static void clearFloor();  // Méthode statique pour nettoyer les Materias non équipées restantes
};

#endif