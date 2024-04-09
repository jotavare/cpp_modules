/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Heritage.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jotavare <jotavare@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/09 15:45:14 by jotavare          #+#    #+#             */
/*   Updated: 2024/04/09 15:48:06 by jotavare         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>

class Cat
{
private:
    int _numberOfLegs;

public:
    Cat(void);
    Cat(const Cat &copy);
    Cat &operator=(const Cat &);
    ~Cat(void);

    void run(int distance);

    void scornSomeone(std::string const &target);
};

class Pony
{
    private:
    int _numberOfLegs;
    
    public:
    Pony(void);
    Pony(const Pony &copy);
    Pony &operator=(const Pony &);
    ~Pony(void);

    void run(int distance);

    void doMagic(std::string const &target);
};