/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jotavare <jotavare@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/06 16:15:39 by jotavare          #+#    #+#             */
/*   Updated: 2024/04/07 23:32:13 by jotavare         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
#define FIXED_HPP

#include <iostream>
#include <cmath>

class Fixed
{
private:
    int _fixedPointValue;                      // subject variable
    static const int _fractionalBitsValue = 8; // subject variable

public:
    Fixed(void);                         // default constructor
    Fixed(const int value);              // constructor with parameter int
    Fixed(const float value);            // constructor with parameter float
    Fixed(const Fixed &copy);            // copy constructor
    Fixed &operator=(const Fixed &copy); // copy assigment overload
    ~Fixed();                            // destructor

    int getRawBits(void) const;     // get
    void setRawBits(int const raw); // set

    float toFloat(void) const; // convert from fixed point value to float
    int toInt(void) const;     // convert from fixed point value to int
};

std::ostream &operator<<(std::ostream &out, const Fixed &right);

#endif
