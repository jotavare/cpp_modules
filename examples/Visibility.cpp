/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Visibility.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jotavare <jotavare@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/06 11:26:16 by jotavare          #+#    #+#             */
/*   Updated: 2024/04/06 11:31:54 by jotavare         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Visibility.hpp"

int main()
{
    Sample instance;

    instance.publicFoo = 42;
    std::cout << "instance.publicFoo: " << instance.publicFoo << std::endl;
    // instance._privateFoo = 42;
    // std::cout << "instance._privateFoo: " << instance._privateFoo << std::endl;

    instance.publicBar();
    // instance._privateBar();
    return (0);
}

Sample::Sample(void)
{
    std::cout << "Constructor!" << std::endl;

    this->publicFoo = 0;
    std::cout << "this->publicFoo: " << this->publicFoo << std::endl;
    this->_privateFoo = 0;
    std::cout << "this->_privateFoo: " << this->_privateFoo << std::endl;

    this->publicBar();
    this->_privateBar();

    return;
}

Sample::~Sample(void)
{
    std::cout << "Destructor!" << std::endl;
    return;
}

void Sample::publicBar(void) const
{
    std::cout << "publicBar function!" << std::endl;
    return;
}

void Sample::_privateBar(void) const
{
    std::cout << "privateBar function!" << std::endl;
    return;
}