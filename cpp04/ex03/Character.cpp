/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mianni <mianni@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/14 21:16:57 by mianni            #+#    #+#             */
/*   Updated: 2025/03/15 17:39:04 by mianni           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./inc/Character.hpp"
#include <iostream>

//stockage des Materias au sol
AMateria* Character::_floor[100] = {0};
int Character::_floorCount = 0;

Character::Character(std::string const & name) : _name(name) {
    for (int i = 0; i < 4; ++i) {
        _inventory[i] = NULL;
    }
}

Character::Character(Character const & other) : _name(other._name) {
    for (int i = 0; i < 4; ++i) {
        _inventory[i] = NULL;
    }
    for (int i = 0; i < 4; ++i) {
        if (other._inventory[i]) {
            _inventory[i] = other._inventory[i]->clone();
        }
    }
}

Character & Character::operator=(Character const & other) {
    if (this != &other) {
        _name = other._name;
        for (int i = 0; i < 4; ++i) {
            if (_inventory[i]) {
                delete _inventory[i];
                _inventory[i] = NULL;
            }
        }
        for (int i = 0; i < 4; ++i) {
            if (other._inventory[i]) {
                _inventory[i] = other._inventory[i]->clone();
            } else {
                _inventory[i] = NULL;
            }
        }
    }
    return *this;
}

Character::~Character() {
    // Supprime les Materias encore dans l’inventaire
    for (int i = 0; i < 4; ++i) {
        if (_inventory[i]) {
            delete _inventory[i];
            _inventory[i] = NULL;
        }
    }
}

std::string const & Character::getName() const {
    return _name;
}

void Character::equip(AMateria* m) {
    if (!m) return;  // ne rien faire si pointeur invalide

    for (int i = 0; i < 4; ++i) {
        if (_inventory[i] == NULL) {
            _inventory[i] = m;
            return;
        }
    }
    delete m;
}

void Character::unequip(int idx) {
    if (idx < 0 || idx >= 4) return;  // index hors limite

    if (_inventory[idx] != NULL) {
        if (_floorCount < 100) {
            _floor[_floorCount++] = _inventory[idx];
        }
        _inventory[idx] = NULL;
    }
}

void Character::use(int idx, ICharacter& target) {
    if (idx < 0 || idx >= 4) return; 

    if (_inventory[idx]) {
        _inventory[idx]->use(target);
    }
}

void Character::clearFloor() {
    for (int i = 0; i < _floorCount; ++i) {
        if (_floor[i]) {
            delete _floor[i];
            _floor[i] = NULL;
        }
    }
    _floorCount = 0;
}
