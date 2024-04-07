/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jotavare <jotavare@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/06 16:15:37 by jotavare          #+#    #+#             */
/*   Updated: 2024/04/07 19:35:15 by jotavare         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

Fixed::Fixed(int _fixedPoint) : _fixedPoint(0)
{
	std::cout << "Constructor!" << std::endl;
	std::cout << "Constructor iniliazed the fixed point variable to" << _fixedPoint << "!" << std::endl;
}

Fixed::Fixed(const Fixed &copy)
{
	std::cout << "Copy constructor!" << std::endl;
	*this = copy;
}

Fixed &Fixed::operator=(const Fixed &copy)
{
	std::cout << "Operator overload!" << std::endl;
	_fixedPoint = copy.getRawBits();
	return *this;
}

Fixed::~Fixed()
{
	std::cout << "Destructor!" << std::endl;
}

int Fixed::getRawBits(void) const
{
	std::cout << "getRawBits!" << std::endl;
	return _fixedPoint;
}

void Fixed::setRawBits(int const raw)
{
	std::cout << "setRawBits!" << std::endl;
	_fixedPoint = raw;
}
