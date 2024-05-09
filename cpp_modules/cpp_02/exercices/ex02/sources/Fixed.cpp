/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jotavare <jotavare@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/06 16:15:37 by jotavare          #+#    #+#             */
/*   Updated: 2024/05/09 17:42:03 by jotavare         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/Fixed.hpp"

Fixed::Fixed(void)
{
	// std::cout << "Default constructor used!" << std::endl;
	this->_fixedPointValue = 0;
	// std::cout << "Default constructor iniliazed the _fixedPointValue variable!" << std::endl;
}

Fixed::Fixed(const Fixed &copy)
{
	// std::cout << "Copy constructor used!" << std::endl;
	*this = copy;
}

Fixed &Fixed::operator=(const Fixed &copy)
{
	if (this == &copy)
		return (*this);
	// std::cout << "Copy assigment operator used!" << std::endl;
	this->_fixedPointValue = copy.getRawBits();
	return (*this);
}

Fixed::~Fixed()
{
	// std::cout << "Destructor used!" << std::endl;
}

int Fixed::getRawBits(void) const
{
	// std::cout << "getRawBits used!" << std::endl;
	return (this->_fixedPointValue);
}

void Fixed::setRawBits(int const raw)
{
	// std::cout << "setRawBits used!" << std::endl;
	this->_fixedPointValue = raw;
}

Fixed::Fixed(const int value)
{
	// std::cout << "Constructor with parameter used!" << std::endl;
	this->_fixedPointValue = value * (1 << this->_fractionalBitsValue);
	// std::cout << "Value of type int was converted to fixed-point and assigned to the variable _fixedPointValue!" << std::endl;
}

Fixed::Fixed(const float value)
{
	// std::cout << "Constructor with parameter used!" << std::endl;
	this->_fixedPointValue = roundf(value * (1 << this->_fractionalBitsValue));
	// std::cout << "Value of type float was converted to fixed-point and assigned to the variable _fixedPointValue!" << std::endl;
}

int Fixed::toInt(void) const
{
	return (this->_fixedPointValue >> this->_fractionalBitsValue);
}

float Fixed::toFloat(void) const
{
	return ((float)this->_fixedPointValue / (float)(1 << this->_fractionalBitsValue));
}

std::ostream &operator<<(std::ostream &outputStream, const Fixed &object)
{
	outputStream << object.toFloat();
	return (outputStream);
}

// comparasion operators
bool Fixed::operator>(const Fixed &object) const
{
	return (this->getRawBits() > object.getRawBits());
}

bool Fixed::operator<(const Fixed &object) const
{
	return (this->getRawBits() < object.getRawBits());
}

bool Fixed::operator>=(const Fixed &object) const
{
	return (this->getRawBits() >= object.getRawBits());
}

bool Fixed::operator<=(const Fixed &object) const
{
	return (this->getRawBits() <= object.getRawBits());
}

bool Fixed::operator==(const Fixed &object) const
{
	return (this->getRawBits() == object.getRawBits());
}

bool Fixed::operator!=(const Fixed &object) const
{
	return (this->getRawBits() != object.getRawBits());
}

// arithmetic operators
Fixed Fixed::operator+(const Fixed &object) const
{
	return (Fixed(this->toFloat() + object.toFloat()));
}

Fixed Fixed::operator-(const Fixed &object) const
{
	return (Fixed(this->toFloat() - object.toFloat()));
}

Fixed Fixed::operator*(const Fixed &object) const
{
	return (Fixed(this->toFloat() * object.toFloat()));
}

Fixed Fixed::operator/(const Fixed &object) const
{
	return (Fixed(this->toFloat() / object.toFloat()));
}

// (pre and post) increment and (pre and post) decrement operators
Fixed Fixed::operator++(void)
{
	this->_fixedPointValue++;
	return (*this);
}

Fixed Fixed::operator--(void)
{
	this->_fixedPointValue--;
	return (*this);
}

Fixed Fixed::operator++(int value)
{
	Fixed temp(*this);
	(void)value;
	++(*this);
	return (temp);
}

Fixed Fixed::operator--(int value)
{
	Fixed temp(*this);
	(void)value;
	--(*this);
	return (temp);
}

// static functions
Fixed &Fixed::min(Fixed &a, Fixed &b)
{
	return (a < b) ? a : b;
}

const Fixed &Fixed::min(const Fixed &a, const Fixed &b)
{
	return (a < b) ? a : b;
}

Fixed &Fixed::max(Fixed &a, Fixed &b)
{
	return (a > b) ? a : b;
}

const Fixed &Fixed::max(const Fixed &a, const Fixed &b)
{
	return (a > b) ? a : b;
}
