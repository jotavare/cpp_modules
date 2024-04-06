/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Comparaisons.cpp                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jotavare <jotavare@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/06 12:02:12 by jotavare          #+#    #+#             */
/*   Updated: 2024/04/06 12:10:26 by jotavare         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Comparaisons.hpp"

int main()
{
    Sample instance1(42);
    Sample instance2(42);

    if (&instance1 == &instance1)
        std::cout << "instance1 and instance1 are physically equal" << std::endl;
    else
        std::cout << "instance1 and instance1 are not physically equal" << std::endl;

    if (&instance1 == &instance2)
        std::cout << "instance1 and instance2 are physically equal" << std::endl;
    else
        std::cout << "instance1 and instance2 are not physically equal" << std::endl;

    if (instance1.compare(&instance1) == 0)
        std::cout << "instance1 and instance1 are structurally equal" << std::endl;
    else
        std::cout << "instance1 and instance1 are not structurally equal" << std::endl;

    if (instance1.compare(&instance2) == 0)
        std::cout << "instance1 and instance2 are structurally equal" << std::endl;
    else
        std::cout << "instance1 and instance2 are not structurally equal" << std::endl;

    return (0);
}

Sample::Sample(int v) : _foo(v)
{
    std::cout << "Constructor!" << std::endl;
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

int Sample::compare(Sample *other) const
{
    if (this->_foo < other->getFoo())
        return -1;
    else if (this->_foo > other->getFoo())
        return 1;

    return 0;
}