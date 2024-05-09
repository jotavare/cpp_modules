/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jotavare <jotavare@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/09 13:52:38 by jotavare          #+#    #+#             */
/*   Updated: 2024/05/09 17:53:29 by jotavare         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ClapTrap.hpp"
#include "../includes/ScavTrap.hpp"
#include "../includes/FragTrap.hpp"

int main()
{
    ClapTrap claptrap("Jeff");
    ScavTrap scavtrap("Bob");
    FragTrap fragtrap("Alice");

    std::cout << "-------------------------------------------------------------" << std::endl;
    std::cout << claptrap.getName() << " Health points: " << claptrap.getHitPoints() << std::endl;
    std::cout << claptrap.getName() << " Energy points: " << claptrap.getEnergyPoints() << std::endl;
    std::cout << claptrap.getName() << " Attack damage: " << claptrap.getAttackDamage() << std::endl;
    std::cout << "-------------------------------------------------------------" << std::endl;
    std::cout << "-------------------------------------------------------------" << std::endl;
    std::cout << scavtrap.getName() << " Health points: " << scavtrap.getHitPoints() << std::endl;
    std::cout << scavtrap.getName() << " Energy points: " << scavtrap.getEnergyPoints() << std::endl;
    std::cout << scavtrap.getName() << " Attack damage: " << scavtrap.getAttackDamage() << std::endl;
    std::cout << "-------------------------------------------------------------" << std::endl;
    std::cout << "-------------------------------------------------------------" << std::endl;
    std::cout << fragtrap.getName() << " Health points: " << fragtrap.getHitPoints() << std::endl;
    std::cout << fragtrap.getName() << " Energy points: " << fragtrap.getEnergyPoints() << std::endl;
    std::cout << fragtrap.getName() << " Attack damage: " << fragtrap.getAttackDamage() << std::endl;
    std::cout << "-------------------------------------------------------------" << std::endl;

    claptrap.attack("Monster");
    claptrap.takeDamage(5);
    claptrap.beRepaired(3);

    scavtrap.guardGate();
    scavtrap.attack("Monster");
    scavtrap.takeDamage(12);
    scavtrap.beRepaired(5);

    fragtrap.highFivesGuys();
    fragtrap.attack("Monster");
    fragtrap.takeDamage(6);
    fragtrap.beRepaired(4);

    std::cout << "-------------------------------------------------------------" << std::endl;
    std::cout << claptrap.getName() << " Health points: " << claptrap.getHitPoints() << std::endl;
    std::cout << claptrap.getName() << " Energy points: " << claptrap.getEnergyPoints() << std::endl;
    std::cout << claptrap.getName() << " Attack damage: " << claptrap.getAttackDamage() << std::endl;
    std::cout << "-------------------------------------------------------------" << std::endl;
    std::cout << "-------------------------------------------------------------" << std::endl;
    std::cout << scavtrap.getName() << " Health points: " << scavtrap.getHitPoints() << std::endl;
    std::cout << scavtrap.getName() << " Energy points: " << scavtrap.getEnergyPoints() << std::endl;
    std::cout << scavtrap.getName() << " Attack damage: " << scavtrap.getAttackDamage() << std::endl;
    std::cout << "-------------------------------------------------------------" << std::endl;
    std::cout << "-------------------------------------------------------------" << std::endl;
    std::cout << fragtrap.getName() << " Health points: " << fragtrap.getHitPoints() << std::endl;
    std::cout << fragtrap.getName() << " Energy points: " << fragtrap.getEnergyPoints() << std::endl;
    std::cout << fragtrap.getName() << " Attack damage: " << fragtrap.getAttackDamage() << std::endl;
    std::cout << "-------------------------------------------------------------" << std::endl;

    return 0;
}
