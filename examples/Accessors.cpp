/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Accessors.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jotavare <jotavare@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/06 11:51:52 by jotavare          #+#    #+#             */
/*   Updated: 2024/04/06 11:58:27 by jotavare         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Accessors.hpp"

int main()
{
    Sample instance;

    instance.setFoo(42);
    std::cout << "instance.getFoo(): " << instance.getFoo() << std::endl;
    instance.setFoo(-42);
    std::cout << "instance.getFoo(): " << instance.getFoo() << std::endl;

    return (0);
}

Sample::Sample(void)
{
    std::cout << "Constructor!" << std::endl;

    this->setFoo(0);
    std::cout << "this->getFoo(): " << this->getFoo() << std::endl;

    return;
}

Sample::~Sample(void)
{
    std::cout << "Destructor!" << std::endl;

    return;
}

int Sample::getFoo(void) const
{
    return this->_foo;
}

void Sample::setFoo(int v)
{
    if (v >= 0)
        this->_foo = v;

    return;
}