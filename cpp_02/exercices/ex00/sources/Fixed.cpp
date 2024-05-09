/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jotavare <jotavare@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/06 16:15:37 by jotavare          #+#    #+#             */
/*   Updated: 2024/05/09 17:41:48 by jotavare         ###   ########.fr       */
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
	std::cout << "Copy assigment operator used!" << std::endl;
	this->_fixedPointValue = copy.getRawBits();
	return *this;
}

Fixed::~Fixed(void)
{
	std::cout << "Destructor used!" << std::endl;
}

int Fixed::getRawBits(void) const
{
	std::cout << "getRawBits used!" << std::endl;
	return this->_fixedPointValue;
}

void Fixed::setRawBits(int const raw)
{
	std::cout << "setRawBits used!" << std::endl;
	this->_fixedPointValue = raw;
}
