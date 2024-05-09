/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jotavare <jotavare@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/09 17:22:50 by jotavare          #+#    #+#             */
/*   Updated: 2024/05/09 18:02:06 by jotavare         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/FragTrap.hpp"

FragTrap::FragTrap() : ClapTrap()
{
    std::cout << "FragTrap default constructor" << std::endl;
}

FragTrap::FragTrap(std::string name) : ClapTrap(name)
{
    std::cout << "FragTrap constructor with parameter" << std::endl;
    this->_TrapName = name;
    this->_HitPoints = 100;
    this->_EnergyPoints = 100;
    this->_AttackDamage = 30;
}

FragTrap::FragTrap(const FragTrap &copy) : ClapTrap(copy)
{
    std::cout << "FragTrap copy constructor" << std::endl;
    *this = copy;
}

FragTrap &FragTrap::operator=(const FragTrap &copy)
{
    std::cout << "FragTrap assignation operator" << std::endl;
    if (this == &copy)
        return (*this);
    this->_TrapName = copy._TrapName;
    this->_HitPoints = copy._HitPoints;
    this->_EnergyPoints = copy._EnergyPoints;
    this->_AttackDamage = copy._AttackDamage;
    return (*this);
}

FragTrap::~FragTrap()
{
    std::cout << "FragTrap destructor" << std::endl;
}

void FragTrap::highFivesGuys()
{
    std::cout << YELLOW "FragTrap " << this->_TrapName << " high fives everyone!" RESET << std::endl;
}
