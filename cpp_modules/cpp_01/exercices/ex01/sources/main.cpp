/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jotavare <jotavare@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/03 16:53:03 by jotavare          #+#    #+#             */
/*   Updated: 2024/05/09 17:29:22 by jotavare         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/Zombie.hpp"

int main(void)
{
    int quantity = 5;

    Zombie *horde = zombieHorde(quantity, "Banana");

    for (int i = 0; i < quantity; i++)
        horde[i].announce();

    delete[] horde;
    return (0);
}
