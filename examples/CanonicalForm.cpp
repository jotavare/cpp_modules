/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   CanonicalForm.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jotavare <jotavare@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/06 15:42:05 by jotavare          #+#    #+#             */
/*   Updated: 2024/04/06 15:49:19 by jotavare         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "CanonicalForm.hpp"

Sample::Sample(void) : _foo(42)
{
    std::cout << "Default constructor called" << std::endl;
    return;
}

Sample::Sample(int const n) : _foo(n)
{
    std::cout << "Parametric constructor called" << std::endl;
    return;
}

Sample::Sample(Sample const &src)
{
    std::cout << "Copy constructor called" << std::endl;
    *this = src;
    return;
}

Sample::~Sample(void)
{
    std::cout << "Destructor called" << std::endl;
    return;
}

int Sample::getFoo(void) const
{
    return this->_foo;
}

Sample &Sample::operator=(Sample const &rhs)
{
    std::cout << "Assignation operator called" << std::endl;

    if (this != &rhs)
        this->_foo = rhs.getFoo();

    return *this;
}

std::ostream &operator<<(std::ostream &o, Sample const &i)
{
    o << "The value of _foo is: " << i.getFoo();
    return o;
}

// serialize the class into a string
std::string Sample::serialize(void) const
{
    return std::to_string(this->_foo);
}

int main(void)
{
    Sample instance1;
    Sample instance2(42);
    Sample instance3(instance1);

    std::cout << instance1 << std::endl;
    std::cout << instance2 << std::endl;
    std::cout << instance3 << std::endl;

    instance3 = instance2;
    std::cout << instance3 << std::endl;

    return 0;
}