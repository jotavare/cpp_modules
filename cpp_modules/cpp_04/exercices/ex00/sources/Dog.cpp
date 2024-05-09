/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jotavare <jotavare@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/10 14:28:03 by jotavare          #+#    #+#             */
/*   Updated: 2024/05/09 18:08:45 by jotavare         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "../includes/Dog.hpp"

Dog::Dog()
{
    std::cout << "Dog constructor called!" << std::endl;
    _type = "Dog";
}

Dog::Dog(const Dog &copy) : Animal(copy)
{
    std::cout << "Dog copy constructor called!" << std::endl;
    *this = copy;
}

Dog &Dog::operator=(const Dog &copy)
{
    std::cout << "Dog assignation operator called!" << std::endl;
    if (this != &copy)
        _type = copy._type;
    return *this;
}

Dog::~Dog() {
    std::cout << "Dog destructor called!" << std::endl;
}

void Dog::makeSound() const
{
    std::cout << "Woof Woof!" << std::endl;
}
