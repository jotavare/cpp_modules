/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jotavare <jotavare@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/03 16:53:07 by jotavare          #+#    #+#             */
/*   Updated: 2024/04/03 16:53:08 by jotavare         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

class Zombie
{
public:
    Zombie();
    ~Zombie();
    Zombie(std::string name);
    void announce(void);
private:
    std::string name;
};

Zombie* zombieHorde( int N, std::string name );
