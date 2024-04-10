/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jotavare <jotavare@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/10 15:55:18 by jotavare          #+#    #+#             */
/*   Updated: 2024/04/10 16:35:23 by jotavare         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Brain.hpp"
#include <iostream>
#include <cstdlib>

Brain::Brain()
{
    std::cout << "Brain constructor called!" << std::endl;

    // Array of ideas
    std::string _ideas[100] =
    {
        "Braaaaains!",
        "Rrrrrr...",
        "Hungry...",
        "Uuuhhh...",
        "Need flesh...",
        "Must feed...",
        "Aaargh!",
        "Graaaah!",
        "Death is coming...",
        "Zombies... everywhere..."
    };
    
    // Randomly assign ideas to the brain
    for (int i = 0; i < 100; i++)
    {
        this->_ideas[i] = _ideas[rand() % 10];
    }
    
}

Brain::Brain(const Brain &copy)
{
    std::cout << "Brain copy constructor called!" << std::endl;
    *this = copy;
}

Brain &Brain::operator=(const Brain &copy)
{
    std::cout << "Brain assignation operator called!" << std::endl;
    for(int i = 0; i < 100; i++)
    {
        this->_ideas[i] = copy._ideas[i];
    }
    return *this;
}

Brain::~Brain()
{
    std::cout << "Brain destructor called!" << std::endl;
}

void Brain::setIdea(int index, std::string idea)
{
    this->_ideas[index] = idea;
}

std::string Brain::getIdea(int index) const
{
    return this->_ideas[index];
}
