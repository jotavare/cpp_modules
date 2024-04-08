/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jotavare <jotavare@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/06 16:15:40 by jotavare          #+#    #+#             */
/*   Updated: 2024/04/08 12:58:05 by jotavare         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Point.hpp"

// Function to check if a point is inside a triangle
bool bsp(Point const a, Point const b, Point const c, Point const point);

int main()
{
    Point a(2, 5);
    Point b(0, 0);
    Point c(5, 0);
    float x;
    float y;

    std::cout << "Input x and y (x y): ";
    std::cin >> x >> y;
    if (std::cin.fail())
    {
        std::cout << "\n\tBad input\n"
                  << std::endl;
        return (EXIT_FAILURE);
    }

    if (bsp(a, b, c, Point(x, y)))
        std::cout << "(" << x << "," << y << ") is inside the triangle" << std::endl;
    else
        std::cout << "(" << x << "," << y << ") is outside the triangle" << std::endl;
    return 0;
}
