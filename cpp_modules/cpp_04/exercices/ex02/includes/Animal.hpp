/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jotavare <jotavare@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/10 14:10:17 by jotavare          #+#    #+#             */
/*   Updated: 2024/05/09 18:19:27 by jotavare         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>

class Animal
{
    protected:
        std::string _type;

    public:
        Animal();
        Animal(const Animal &copy);
        Animal &operator=(const Animal &copy);
        virtual ~Animal();

        virtual void makeSound() const;
        std::string getType() const;
};