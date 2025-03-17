/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mianni <mianni@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/14 21:17:30 by mianni            #+#    #+#             */
/*   Updated: 2025/03/15 17:39:52 by mianni           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./inc/Ice.hpp"
#include "./inc/ICharacter.hpp"
#include <iostream>

Ice::Ice() : AMateria("ice") {
}

Ice::Ice(Ice const & other) : AMateria(other) {

}

Ice & Ice::operator=(Ice const & other) {
    AMateria::operator=(other);
    return *this;
}

Ice::~Ice() {
}

AMateria* Ice::clone() const {
    return new Ice(*this);
}

void Ice::use(ICharacter& target) {
    std::cout << "* shoots an ice bolt at " << target.getName() << " *" << std::endl;
}