/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jotavare <jotavare@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/06 16:15:39 by jotavare          #+#    #+#             */
/*   Updated: 2024/04/08 15:25:10 by jotavare         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
#define FIXED_HPP

#include <iostream>
#include <cmath>

class Fixed
{
private:
    int _fixedPointValue;
    static const int _fractionalBitsValue = 8;

public:
    Fixed(void);
    Fixed(const Fixed &copy);
    Fixed &operator=(const Fixed &copy);
    ~Fixed();

    Fixed(const int value);   // constructor with parameter int
    Fixed(const float value); // constructor with parameter float

    int getRawBits(void) const;
    void setRawBits(int const raw);

    float toFloat(void) const; // convert from fixed point value to float
    int toInt(void) const;     // convert from fixed point value to int
};

std::ostream &operator<<(std::ostream &out, const Fixed &object); // output operator overload

#endif
