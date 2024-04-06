/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Visibility.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jotavare <jotavare@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/06 11:26:16 by jotavare          #+#    #+#             */
/*   Updated: 2024/04/06 11:29:40 by jotavare         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Visibility.hpp"

int main()
{
    Sample sample;

    sample.publicFoo = 42;
    sample.publicBar();
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