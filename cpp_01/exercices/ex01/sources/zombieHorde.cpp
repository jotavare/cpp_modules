/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   zombieHorde.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jotavare <jotavare@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/03 16:53:09 by jotavare          #+#    #+#             */
/*   Updated: 2024/05/09 17:29:19 by jotavare         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/Zombie.hpp"

Zombie* zombieHorde(int N, std::string name)
{
    Zombie *horde;

    if (!N || name.empty())
        return (NULL);

    horde = new Zombie[N];

    for (int i = 0; i < N; i++)
        new (&horde[i]) Zombie(name);

    return (horde);
}
