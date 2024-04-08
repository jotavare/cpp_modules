/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jotavare <jotavare@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/06 16:15:39 by jotavare          #+#    #+#             */
/*   Updated: 2024/04/08 14:12:14 by jotavare         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
#define FIXED_HPP

#include <iostream>
#include <cmath>

#define RESET "\033[0m"
#define RED "\033[31m"
#define GREEN "\033[32m"

class Fixed
{
private:
    // variables
    int _fixedPointValue;
    static const int _fractionalBitsValue = 8;

public:
    // constructors and destructors
    Fixed(void);
    Fixed(const int value);
    Fixed(const float value);
    Fixed(const Fixed &copy);
    ~Fixed();

    // overload operators
    Fixed &operator=(const Fixed &copy);

    // comparison operators
    bool operator>(const Fixed &object) const;
    bool operator<(const Fixed &object) const;
    bool operator>=(const Fixed &object) const;
    bool operator<=(const Fixed &object) const;
    bool operator==(const Fixed &object) const;
    bool operator!=(const Fixed &object) const;

    // arithmetic operators
    Fixed operator+(const Fixed &object) const;
    Fixed operator-(const Fixed &object) const;
    Fixed operator*(const Fixed &object) const;
    Fixed operator/(const Fixed &object) const;

    // (pre and post) increment and (pre and post) decrement operators
    Fixed operator++(void);
    Fixed operator++(int value);
    Fixed operator--(void);
    Fixed operator--(int value);

    // static functions
    static Fixed &min(Fixed &a, Fixed &b);
    static const Fixed &min(const Fixed &a, const Fixed &b);
    static Fixed &max(Fixed &a, Fixed &b);
    static const Fixed &max(const Fixed &a, const Fixed &b);

    // get and set
    int getRawBits(void) const;
    void setRawBits(int const raw);

    // functions
    float toFloat(void) const;
    int toInt(void) const;
};

std::ostream &operator<<(std::ostream &out, const Fixed &object);

#endif
