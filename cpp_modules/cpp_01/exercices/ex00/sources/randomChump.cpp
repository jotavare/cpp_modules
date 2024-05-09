/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   randomChump.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jotavare <jotavare@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/03 16:52:32 by jotavare          #+#    #+#             */
/*   Updated: 2024/05/09 17:28:59 by jotavare         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/Zombie.hpp"

void randomChump(std::string name)
{
    // create a zombie on the stack
    Zombie newZombie(name);
    newZombie.announce();
}
