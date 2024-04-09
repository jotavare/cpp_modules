/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jotavare <jotavare@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/09 12:58:23 by jotavare          #+#    #+#             */
/*   Updated: 2024/04/09 14:05:18 by jotavare         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>

class ClapTrap
{
private:
    std::string _ClapTrapName;
    int _HitPoints;
    int _EnergyPoints;
    int _AttackDamage;

public:
    ClapTrap(void);
    ClapTrap(std::string name);
    ClapTrap(const ClapTrap &copy);
    ClapTrap &operator=(const ClapTrap &copy);
    ~ClapTrap(void);

    std::string getClapTrapName(void) const;
    int getHitPoints(void) const;
    int getEnergyPoints(void) const;
    void setClapTrapName(std::string name);
    void setHitPoints(int hitPoints);
    void setEnergyPoints(int energyPoints);

    void attack(const std::string &target);
    void takeDamage(unsigned int amount);
    void beRepaired(unsigned int amount);
};
