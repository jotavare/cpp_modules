/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jotavare <jotavare@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/06 16:15:37 by jotavare          #+#    #+#             */
/*   Updated: 2024/05/09 17:41:58 by jotavare         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/Fixed.hpp"

Fixed::Fixed(void)
{
	std::cout << "Default constructor used!" << std::endl;
	this->_fixedPointValue = 0;
	std::cout << "Default constructor iniliazed the _fixedPointValue variable!" << std::endl;
}

Fixed::Fixed(const Fixed &copy)
{
	std::cout << "Copy constructor used!" << std::endl;
	*this = copy;
}

Fixed &Fixed::operator=(const Fixed &copy)
{
	if (this == &copy)
		return (*this);
	std::cout << "Copy assigment operator used!" << std::endl;
	this->_fixedPointValue = copy.getRawBits();
	return (*this);
}

Fixed::~Fixed()
{
	std::cout << "Destructor used!" << std::endl;
}

int Fixed::getRawBits(void) const
{
	return (this->_fixedPointValue);
}

void Fixed::setRawBits(int const raw)
{
	this->_fixedPointValue = raw;
}

/*
 * the shift expression calculates the scale factor
 * since its 8 its like multiplying the number by 256 = 2^8
 * an example were the value equals to 5:
 * 5 << 8 = 1280 || 1280 / 256 = 5
 * 1280 represents 5 in fixed point notation
 * in binnary 5 is 101 and 1280 is 10100000000
 * so the 0s after the 101 are the fractional bits
 */
Fixed::Fixed(const int value)
{
	std::cout << "Constructor with parameter used!" << std::endl;
	this->_fixedPointValue = value * (1 << this->_fractionalBitsValue);
	std::cout << "Value of type int was converted to fixed-point and assigned to the variable _fixedPointValue!" << std::endl;
}

/*
 * same example were value is 5:
 * (1 << 8) = 256
 * 5 * 256 = 1280
 * roundf is used to round the value to the nearest integer
 * for example 5.5 would be rounded to 6
 * in binary 6 is 110 and 1536 is 11000000000
 * so the 0s after the 110 are the fractional bits
 */
Fixed::Fixed(const float value)
{
	std::cout << "Constructor with parameter used!" << std::endl;
	this->_fixedPointValue = roundf(value * (1 << this->_fractionalBitsValue));
	std::cout << "Value of type float was converted to fixed-point and assigned to the variable _fixedPointValue!" << std::endl;
}

int Fixed::toInt(void) const
{
	return (this->_fixedPointValue >> this->_fractionalBitsValue);
}

/*
 * cast it float, so the division is done with float numbers
 */
float Fixed::toFloat(void) const
{
	return ((float)this->_fixedPointValue / (float)(1 << this->_fractionalBitsValue));
}

/*
 * the operator << is overloaded to print the value of the object to the output stream
 * without this i couldn't print the value of the object if i used std::cout << a only
 */
std::ostream &operator<<(std::ostream &outputStream, const Fixed &object)
{
	outputStream << object.toFloat();
	return (outputStream);
}
