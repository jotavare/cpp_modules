/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jotavare <jotavare@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/06 16:15:39 by jotavare          #+#    #+#             */
/*   Updated: 2024/04/07 19:34:44 by jotavare         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
#define FIXED_HPP

#include <iostream>
class Fixed
{
private:
    int _fixedPoint;                      // subject variable
    static const int _fractionalBits = 8; // subject variable

public:
    Fixed(int _fixedPoint);              // default constructor
    Fixed(const Fixed &copy);            // copy constructor
    ~Fixed();                            // destructor
    Fixed &operator=(const Fixed &copy); // operator overload

    int getRawBits(void) const;     // get the raw value of the fixed point value
    void setRawBits(int const raw); // set the raw value of the fixed point value
};

#endif
