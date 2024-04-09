/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jotavare <jotavare@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/09 13:52:38 by jotavare          #+#    #+#             */
/*   Updated: 2024/04/09 17:12:27 by jotavare         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"
#include "ScavTrap.hpp"

int main()
{
    ClapTrap claptrap("Jeff");
    ScavTrap scavtrap("Bob");

    scavtrap.guardGate();
    scavtrap.attack("Monster");
    scavtrap.takeDamage(12);
    scavtrap.beRepaired(5);

    claptrap.attack("Robot");
    claptrap.takeDamage(5);
    claptrap.beRepaired(3);

    return 0;
}
