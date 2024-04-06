/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PointersToMembers.cpp                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jotavare <jotavare@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/06 12:31:45 by jotavare          #+#    #+#             */
/*   Updated: 2024/04/06 12:45:27 by jotavare         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "PointersToMembers.hpp"

int main()
{
    Sample instance;
    Sample *instancep = &instance;

    int Sample::*p = NULL;
    void (Sample::*f)(void) const;

    p = &Sample::foo;

    std::cout << "Value of member foo: " << instance.foo << std::endl;
    // this will point to the member foo of the instance object
    instance.*p = 21;
    std::cout << "Value of member foo: " << instance.foo << std::endl;
    // this will point to the member foo of the instancep pointer
    instancep->*p = 42;
    std::cout << "Value of member foo: " << instance.foo << std::endl;

    f = &Sample::bar;

    // this will point to the member function bar of the instance object
    (instance.*f)();
    // this will point to the member function bar of the instancep pointer
    (instancep->*f)();

    return (0);
}

Sample::Sample(void) : foo(0)
{
    std::cout << "Constructor!" << std::endl;
    return;
}

Sample::~Sample(void)
{
    std::cout << "Destructor!" << std::endl;
    return;
}

void Sample::bar(void) const
{
    std::cout << "Member function!" << std::endl;
    return;
}