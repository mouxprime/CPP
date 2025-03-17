/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mianni <mianni@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/14 21:16:24 by mianni            #+#    #+#             */
/*   Updated: 2025/03/15 17:22:46 by mianni           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef AMATERIA_HPP
#define AMATERIA_HPP

#include <string>
class ICharacter;  // déclaration anticipée

class AMateria {
protected:
    std::string _type;  // type de la Materia (ex: "ice", "cure")
public:
    AMateria(std::string const & type);
    virtual ~AMateria();

    AMateria(AMateria const & other);
    AMateria & operator=(AMateria const & other);

    std::string const & getType() const;       // Retourne le type de la Materia
    virtual AMateria* clone() const = 0;       // Doit être implémentée par les sous-classes
    virtual void use(ICharacter& target);      // Action par défaut de la Materia sur une cible
};

#endif