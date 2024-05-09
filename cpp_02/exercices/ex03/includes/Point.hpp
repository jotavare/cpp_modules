/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Point.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jotavare <jotavare@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/08 12:06:05 by jotavare          #+#    #+#             */
/*   Updated: 2024/05/09 17:42:38 by jotavare         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef POINT_HPP
#define POINT_HPP

#include "Fixed.hpp"
#include <iostream>
#include <cmath>

class Point
{
private:
    Fixed const _x;
    Fixed const _y;

public:
    // constructors and destructors
    Point();
    Point(const float pointX, const float pointY);
    Point(const Point &copy);
    Point &operator=(const Point &copy);
    ~Point();

    // get and set functions
    Fixed getPointX() const;
    Fixed getPointY() const;
};

#endif
