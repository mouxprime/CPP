/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.hpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mianni <mianni@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/14 23:51:00 by mianni            #+#    #+#             */
/*   Updated: 2025/03/15 17:32:10 by mianni           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MATERIASOURCE_HPP
#define MATERIASOURCE_HPP

#include "IMateriaSource.hpp"
#include "AMateria.hpp"

class MateriaSource : public IMateriaSource {
private:
    AMateria* _templates[4];  // Stocke jusqu'à 4 Materias "apprises" (prototypes)

public:
    MateriaSource();
    MateriaSource(MateriaSource const & other);
    MateriaSource & operator=(MateriaSource const & other);
    virtual ~MateriaSource();

    virtual void learnMateria(AMateria* materia);
    virtual AMateria* createMateria(std::string const & type);
};

#endif