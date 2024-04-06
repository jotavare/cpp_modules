/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   OperatorOverload.cpp                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jotavare <jotavare@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/06 15:12:07 by jotavare          #+#    #+#             */
/*   Updated: 2024/04/06 15:34:14 by jotavare         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "OperatorOverload.hpp"

Intenger::Intenger(int const n) : _n(n)
{
    std::cout << "Intenger constructor called" << std::endl;
    return;
}

Intenger::~Intenger(void)
{
    std::cout << "Intenger destructor called" << std::endl;
    return;
}

int Intenger::getValue(void) const
{
    return this->_n;
}

Intenger &Intenger::operator=(Intenger const &rhs)
{
    std::cout << "Assignation operator called" << std::endl;
    std::cout << " to " << rhs.getValue() << std::endl;

    this->_n = rhs.getValue();
    return *this;
}

Intenger Intenger::operator+(Intenger const &rhs) const
{
    std::cout << "Addition operator called" << std::endl;
    std::cout << " with " << rhs.getValue() << std::endl;

    return Intenger(this->_n + rhs.getValue());
}

std::ostream &operator<<(std::ostream &o, Intenger const &rhs)
{
    o << rhs.getValue();
    return o;
}

int main(void)
{
    Intenger a(1);
    Intenger b(2);
    Intenger c(3);

    std::cout << "a: " << a << std::endl;
    std::cout << "b: " << b << std::endl;
    std::cout << "c: " << c << std::endl;

    a = b + c;
    std::cout << "a: " << a << std::endl;

    return 0;
}
