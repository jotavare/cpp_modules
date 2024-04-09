/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jotavare <jotavare@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/09 13:52:38 by jotavare          #+#    #+#             */
/*   Updated: 2024/04/09 19:39:47 by jotavare         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

int main()
{
    ClapTrap claptrap("Jeff");
    
    std::cout << "-------------------------------------------------------------" << std::endl;
    std::cout << claptrap.getName() << " Health points: " << claptrap.getHitPoints() << std::endl;
    std::cout << claptrap.getName() << " Energy points: " << claptrap.getEnergyPoints() << std::endl;
    std::cout << claptrap.getName() << " Attack damage: " << claptrap.getAttackDamage() << std::endl;
    std::cout << "-------------------------------------------------------------" << std::endl;

    claptrap.attack("Monster");
    claptrap.takeDamage(2);
    claptrap.beRepaired(1);

    std::cout << "-------------------------------------------------------------" << std::endl;
    std::cout << claptrap.getName() << " Health points: " << claptrap.getHitPoints() << std::endl;
    std::cout << claptrap.getName() << " Energy points: " << claptrap.getEnergyPoints() << std::endl;
    std::cout << claptrap.getName() << " Attack damage: " << claptrap.getAttackDamage() << std::endl;
    std::cout << "-------------------------------------------------------------" << std::endl;

    return 0;
}
