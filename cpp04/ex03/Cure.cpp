/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mianni <mianni@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/14 21:17:18 by mianni            #+#    #+#             */
/*   Updated: 2025/03/15 17:39:59 by mianni           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./inc/Cure.hpp"
#include "./inc/Character.hpp"
#include <iostream>

Cure::Cure() : AMateria("cure") {
}

Cure::Cure(Cure const & other) : AMateria(other) {
}

Cure & Cure::operator=(Cure const & other) {
    AMateria::operator=(other);
    return *this;
}

Cure::~Cure() {
}

AMateria* Cure::clone() const {
    return new Cure(*this);
}

void Cure::use(ICharacter& target) {
    std::cout << "* heals " << target.getName() << "'s wounds *" << std::endl;
}