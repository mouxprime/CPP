/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mianni <mianni@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/14 21:16:33 by mianni            #+#    #+#             */
/*   Updated: 2025/03/15 17:35:59 by mianni           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CURE_HPP
#define CURE_HPP

#include "AMateria.hpp"

class Cure : public AMateria {
public:
    Cure();
    Cure(Cure const & other);
    Cure & operator=(Cure const & other);
    virtual ~Cure();

    virtual AMateria* clone() const;
    virtual void use(ICharacter& target);
};

#endif