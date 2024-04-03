/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   newZombie.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jotavare <jotavare@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/03 16:52:30 by jotavare          #+#    #+#             */
/*   Updated: 2024/04/03 16:52:31 by jotavare         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie* newZombie(std::string name)
{
    // dynamically allocate memory on heap
    Zombie* newZombie = new Zombie(name);
    newZombie->announce(); 
    return newZombie;
}
