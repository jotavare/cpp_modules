/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Point.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jotavare <jotavare@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/08 12:10:25 by jotavare          #+#    #+#             */
/*   Updated: 2024/05/09 17:42:20 by jotavare         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/Point.hpp"

Point::Point() : _x(0), _y(0) {}

Point::Point(const float pointX, const float pointY) : _x(pointX), _y(pointY) {}

Point::Point(const Point &copy) : _x(copy._x), _y(copy._y) {}

Point &Point::operator=(const Point &copy)
{
    if (this == &copy)
    {
        (Fixed) this->_x = copy.getPointX();
        (Fixed) this->_y = copy.getPointY();
    }
    return *this;
}

Point::~Point() {}

Fixed Point::getPointX() const
{
    return (Fixed(this->_x));
}

Fixed Point::getPointY() const
{
    return (Fixed(this->_y));
}
