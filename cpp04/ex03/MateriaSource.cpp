/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mianni <mianni@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/14 23:50:55 by mianni            #+#    #+#             */
/*   Updated: 2025/03/15 17:39:29 by mianni           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./inc/MateriaSource.hpp"

MateriaSource::MateriaSource() {
    for (int i = 0; i < 4; ++i) {
        _templates[i] = NULL;
    }
}

MateriaSource::MateriaSource(MateriaSource const & other) {
    for (int i = 0; i < 4; ++i) {
        _templates[i] = NULL;
    }
    for (int i = 0; i < 4; ++i) {
        if (other._templates[i]) {
            _templates[i] = other._templates[i]->clone();
        }
    }
}

MateriaSource & MateriaSource::operator=(MateriaSource const & other) {
    if (this != &other) {
        for (int i = 0; i < 4; ++i) {
            if (_templates[i]) {
                delete _templates[i];
                _templates[i] = NULL;
            }
        }
        for (int i = 0; i < 4; ++i) {
            if (other._templates[i]) {
                _templates[i] = other._templates[i]->clone();
            } else {
                _templates[i] = NULL;
            }
        }
    }
    return *this;
}

MateriaSource::~MateriaSource() {
    for (int i = 0; i < 4; ++i) {
        if (_templates[i]) {
            delete _templates[i];
            _templates[i] = NULL;
        }
    }
}

void MateriaSource::learnMateria(AMateria* materia) {
    if (!materia) return; 

    for (int i = 0; i < 4; ++i) {
        if (_templates[i] == NULL) {
            _templates[i] = materia;
            return;
        }
    }
    delete materia;
}

AMateria* MateriaSource::createMateria(std::string const & type) {
    for (int i = 0; i < 4; ++i) {
        if (_templates[i] && _templates[i]->getType() == type) {
            return _templates[i]->clone();
        }
    }
    return NULL;
}