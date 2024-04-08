/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   bsp.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jotavare <jotavare@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/08 12:42:22 by jotavare          #+#    #+#             */
/*   Updated: 2024/04/08 13:08:25 by jotavare         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Point.hpp"
#include "Fixed.hpp"

/*
 * a, b, c: The vertices of our beloved triangle.
 * point: The point to check.
 * Returns: True if the point is inside the triangle. False otherwise.
 * Thus, if the point is a vertex or on edge, it will return False.
 */

/*
 * barycentric coordinates
 * triangle area = 0.5 * |(x1(y2 - y3) + x2(y3 - y1) + x3(y1 - y2))|
 * area of each of the triangles
 * 
 * point is inside the triangle if:
 * 0 <= alpha <= 1
 * 0 <= beta <= 1
 * 0 <= gamma <= 1
 * alpha + beta + gamma = 1
 */

bool bsp(Point const a, Point const b, Point const c, Point const point)
{
    Fixed const aX = a.getPointX();
    Fixed const aY = a.getPointY();
    Fixed const bX = b.getPointX();
    Fixed const bY = b.getPointY();
    Fixed const cX = c.getPointX();
    Fixed const cY = c.getPointY();
    Fixed const pointX = point.getPointX();
    Fixed const pointY = point.getPointY();

    Fixed const triangle1 = ((bY - cY) * (pointX - cX) + (cX - bX) * (pointY - cY)) /
                        ((bY - cY) * (aX - cX) + (cX - bX) * (aY - cY));
    Fixed const triangle2 = ((cY - aY) * (pointX - cX) + (aX - cX) * (pointY - cY)) /
                       ((bY - cY) * (aX - cX) + (cX - bX) * (aY - cY));
    Fixed const triangle3 = Fixed(1) - triangle1 - triangle2;

    return triangle1 >= Fixed(0) && triangle2 >= Fixed(0) && triangle3 >= Fixed(0);
}
