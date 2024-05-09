/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jotavare <jotavare@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/09 19:07:09 by jotavare          #+#    #+#             */
/*   Updated: 2024/05/09 19:08:57 by jotavare         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/Character.hpp"

Character::Character(const std::string &name) : _name(name) {
    if (0)
        std::cout << "constructor called" << std::endl;
    for (int i = 0; i < _inventorySize; i++)
        _inventory[i] = NULL;
}

Character &Character::operator=(const Character &character) {
    if (this != &character) {
        _name = character._name;
        for (int i = 0; i < _inventorySize; i++) {
            if (_inventory[i])
                delete _inventory[i];
            if (character._inventory[i])
                _inventory[i] = character._inventory[i]->clone();
            else
                _inventory[i] = NULL;
        }
    }
    return (*this);
}

Character::Character(void) : _name("random") {
    if (0)
        std::cout << "constructor called" << std::endl;
    for (int i = 0; i < _inventorySize; i++)
        _inventory[i] = NULL;
}

Character::~Character() {
    if (0)
        std::cout << "destructor called" << std::endl;
    for (int i = 0; i < _inventorySize; i++) {
        if (_inventory[i])
            delete _inventory[i];
    }
}

void Character::equip(AMateria *m) {
    for (int i = 0; i < _inventorySize; i++) {
        if (_inventory[i] == NULL) {
            _inventory[i] = m;
            std::cout << "equips " << m->getType() << " in slot " << i << std::endl;
            return;
        }
    }
    std::cout << "can't equip " << m->getType() << " (inventory full)" << std::endl;
    std::cout << "...deleting materia" << std::endl;
    delete m;
}

void Character::use(int idx, ICharacter &target) {
    if (idx >= 0 && idx < _inventorySize && _inventory[idx]) {
        _inventory[idx]->use(target);
        return;
    }
    std::cout << "do nothing" << std::endl;
}

Character::Character(const Character &character) {
    if (0)
        std::cout << "copy constructor called" << std::endl;
    *this = character;
}

void Character::unequip(int idx) {
    if (idx >= 0 && idx < _inventorySize) {
        std::cout << "unequips " << _inventory[idx]->getType() << " from slot " << idx << std::endl;
        _inventory[idx] = NULL;
    }
}

const std::string &Character::getName(void) const {
    return (_name);
}

static std::string centering(const std::string str, int size = 6) {
    int n, s1, s2;
    std::string centered;
    std::string toCenter = str;
    n = toCenter.size();
    if (n > size) {
        toCenter = toCenter.substr(0, size - 2);
        toCenter[size - 4] = '.';
        toCenter[size - 3] = ' ';
        n = toCenter.size();
    }
    s1 = (size - n) / 2;
    s2 = size - n - s1;
    centered = std::string(s1, ' ') + toCenter + std::string(s2, ' ');
    return (centered);
}

void Character::printInventory(void) const {
    std::cout << "|";
    for (int i = 0; i < _inventorySize; i++) {
        if (_inventory[i])
            std::cout << centering(_inventory[i]->getType()) << "|";
        else
            std::cout << centering("") << "|";
    }
    std::cout << std::endl;
}