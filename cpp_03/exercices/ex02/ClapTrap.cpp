/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jotavare <jotavare@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/09 13:30:52 by jotavare          #+#    #+#             */
/*   Updated: 2024/04/09 17:16:27 by jotavare         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

ClapTrap::ClapTrap()
{
    std::cout << "ClapTrap default constructor" << std::endl;
}

ClapTrap::ClapTrap(std::string name) : _TrapName(name), _HitPoints(10), _EnergyPoints(10), _AttackDamage(0)
{
    std::cout << "ClapTrap constructor with parameter" << std::endl;
}

ClapTrap::ClapTrap(const ClapTrap &copy)
{
    std::cout << "ClapTrap copy constructor" << std::endl;
    *this = copy;
}

ClapTrap &ClapTrap::operator=(const ClapTrap &copy)
{
    std::cout << "ClapTrap assignation operator" << std::endl;
    if (this == &copy)
        return (*this);
    this->_TrapName = copy._TrapName;
    this->_HitPoints = copy._HitPoints;
    this->_EnergyPoints = copy._EnergyPoints;
    this->_AttackDamage = copy._AttackDamage;
    return (*this);
}

ClapTrap::~ClapTrap()
{
    std::cout << "ClapTrap destructor" << std::endl;
}

void ClapTrap::attack(const std::string &target)
{
    std::cout << GREEN "ClapTrap " << this->_TrapName << " attacks " << target << ", causing " << this->_AttackDamage << " points of damage!" RESET << std::endl;
}

void ClapTrap::takeDamage(unsigned int amount)
{
    std::cout << RED "ClapTrap " << this->_TrapName << " takes " << amount << " points of damage!" RESET << std::endl;
    this->_HitPoints -= amount;
}

void ClapTrap::beRepaired(unsigned int amount)
{
    std::cout << YELLOW "ClapTrap " << this->_TrapName << " is repaired by " << amount << " points!" RESET << std::endl;
    this->_HitPoints += amount;
}
