/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mianni <mianni@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/14 21:16:38 by mianni            #+#    #+#             */
/*   Updated: 2025/03/15 17:35:39 by mianni           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ICE_HPP
#define ICE_HPP

#include "AMateria.hpp"

class Ice : public AMateria {
public:
    Ice();
    Ice(Ice const & other);
    Ice & operator=(Ice const & other);
    virtual ~Ice();

    virtual AMateria* clone() const;
    virtual void use(ICharacter& target);
};

#endif