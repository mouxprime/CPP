/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mianni <mianni@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/14 21:16:42 by mianni            #+#    #+#             */
/*   Updated: 2025/03/15 17:41:13 by mianni           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./inc/AMateria.hpp"
#include "./inc/ICharacter.hpp"
#include <iostream>

AMateria::AMateria(std::string const & type) : _type(type) {
}

AMateria::~AMateria() {
}

AMateria::AMateria(AMateria const & other) : _type(other._type) {
}

AMateria & AMateria::operator=(AMateria const & other) {
    (void)other;
    return *this;
}

std::string const & AMateria::getType() const {
    return _type;
}

void AMateria::use(ICharacter& target) {
    std::cout << "* uses " << _type << " materia on " << target.getName() 
              << " *" << std::endl;
}