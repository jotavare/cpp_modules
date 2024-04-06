/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   OperatorOverload.hpp                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jotavare <jotavare@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/06 15:02:00 by jotavare          #+#    #+#             */
/*   Updated: 2024/04/06 15:08:36 by jotavare         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef OPERATOROVERLOAD_HPP
#define OPERATOROVERLOAD_HPP

#include <iostream>
#include <ostream>

/*
 * infix operator "+"
 * 1 + 1
 * prefix operator "++"
 * ++1
 * postfix operator "++"
 * 1++
 */

class Intenger
{
public:
    Intenger(int const n);
    ~Intenger(void);

    int getValue(void) const;

    Intenger &operator=(Intenger const &rhs);
    Intenger operator+(Intenger const &rhs) const;

private:
    int _n;
};

std::ostream &operator<<(std::ostream &o, Intenger const &rhs);

#endif
