/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   IMateriaSource.hpp                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mianni <mianni@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/15 17:27:24 by mianni            #+#    #+#             */
/*   Updated: 2025/03/15 17:27:27 by mianni           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef IMATERIASOURCE_HPP
#define IMATERIASOURCE_HPP

#include <string>
class AMateria;

class IMateriaSource {
public:
    virtual ~IMateriaSource() {}  // destructeur virtuel par défaut

    virtual void learnMateria(AMateria* materia) = 0;
    virtual AMateria* createMateria(std::string const & type) = 0;
};

#endif