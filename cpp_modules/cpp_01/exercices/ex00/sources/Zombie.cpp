/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jotavare <jotavare@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/03 16:52:37 by jotavare          #+#    #+#             */
/*   Updated: 2024/05/09 17:28:52 by jotavare         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/Zombie.hpp"

// default constructor
Zombie::Zombie() {}

// constructor with parameters (so we can access the private variable)
Zombie::Zombie(std::string name)
{
    // we are using this->name to distinguish the private variable from the parameter
    this->name = name;
    std::cout << "Zombie " << this->name << " has been created." << std::endl;
}

// destructor
Zombie::~Zombie()
{
    std::cout << "Zombie " << this->name << " has been destroyed." << std::endl;
}

// method
void Zombie::announce(void)
{
    std::cout << this->name << ": BraiiiiiiinnnzzzZ..." << std::endl;
}
