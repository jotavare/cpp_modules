/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jotavare <jotavare@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/09 13:30:52 by jotavare          #+#    #+#             */
/*   Updated: 2024/04/09 14:03:50 by jotavare         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

ClapTrap::ClapTrap() {}

ClapTrap::ClapTrap(std::string name) : _ClapTrapName(name), _HitPoints(10), _EnergyPoints(10), _AttackDamage(0) {}

ClapTrap::ClapTrap(const ClapTrap &copy)
{
    *this = copy;
}

ClapTrap &ClapTrap::operator=(const ClapTrap &copy)
{
    if (this == &copy)
        return (*this);
    this->_ClapTrapName = copy._ClapTrapName;
    this->_HitPoints = copy._HitPoints;
    this->_EnergyPoints = copy._EnergyPoints;
    this->_AttackDamage = copy._AttackDamage;
    return (*this);
}

ClapTrap::~ClapTrap() {}

void ClapTrap::attack(const std::string &target)
{
    std::cout << "ClapTrap " << this->_ClapTrapName << " attacks " << target << ", causing " << this->_AttackDamage << " points of damage!" << std::endl;
}

void ClapTrap::takeDamage(unsigned int amount)
{
    std::cout << "ClapTrap " << this->_ClapTrapName << " takes " << amount << " points of damage!" << std::endl;
}

void ClapTrap::beRepaired(unsigned int amount)
{
    std::cout << "ClapTrap " << this->_ClapTrapName << " is repaired by " << amount << " points!" << std::endl;
}

std::string ClapTrap::getClapTrapName(void) const
{
    return (this->_ClapTrapName);
}

void ClapTrap::setClapTrapName(std::string name)
{
    this->_ClapTrapName = name;
}

int ClapTrap::getHitPoints(void) const
{
    return (this->_HitPoints);
}

void ClapTrap::setHitPoints(int hitPoints)
{
    this->_HitPoints = hitPoints;
}

int ClapTrap::getEnergyPoints(void) const
{
    return (this->_EnergyPoints);
}

void ClapTrap::setEnergyPoints(int energyPoints)
{
    this->_EnergyPoints = energyPoints;
}
