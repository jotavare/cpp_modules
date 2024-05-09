/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jotavare <jotavare@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/06 16:15:39 by jotavare          #+#    #+#             */
/*   Updated: 2024/04/08 15:23:09 by jotavare         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
#define FIXED_HPP

#include <iostream>
class Fixed
{
private:
    int _fixedPointValue;                      // subject variable
    static const int _fractionalBitsValue = 8; // subject variable

public:
    Fixed(void);                         // default constructor
    Fixed(const Fixed &copy);            // copy constructor
    Fixed &operator=(const Fixed &copy); // copy assigment overload
    ~Fixed(void);                        // destructor

    int getRawBits(void) const;     // get
    void setRawBits(int const raw); // set
};

#endif
