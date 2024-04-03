/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jotavare <jotavare@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/03 16:52:39 by jotavare          #+#    #+#             */
/*   Updated: 2024/04/03 16:53:22 by jotavare         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_HPP
#define ZOMBIE_HPP

#include <iostream>

class Zombie
{
private:
    std::string name;

public:
    Zombie(); // default constructor
    ~Zombie(); // destructor (not necessary)

    Zombie(std::string name); // constructor with parameter

    // method
    void announce(void);
};

Zombie* newZombie(std::string name);
void randomChump(std::string name);

#endif
