/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jotavare <jotavare@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/06 16:15:40 by jotavare          #+#    #+#             */
/*   Updated: 2024/05/09 17:42:17 by jotavare         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/Point.hpp"

// Function to check if a point is inside a triangle
bool bsp(Point const a, Point const b, Point const c, Point const point);

int main()
{
    float ax, ay, bx, by, cx, cy, x, y;
    char check = 'Y';

    std::cout << "Input the [x y] values for point a: ";
    std::cin >> ax >> ay;
    std::cout << "Input the [x y] values for point b: ";
    std::cin >> bx >> by;
    std::cout << "Input the [x y] values for point c: ";
    std::cin >> cx >> cy;

    Point a(ax, ay);
    Point b(bx, by);
    Point c(cx, cy);

    while (check == 'Y' || check == 'y')
    {
        std::cout << "Input the [x y] values for the point to check: ";
        std::cin >> x >> y;

        if (std::cin.fail())
        {
            std::cout << "Wrong values! Exiting..." << std::endl;
            return (EXIT_FAILURE);
        }

        if (bsp(a, b, c, Point(x, y)))
            std::cout << GREEN "(" << x << "," << y << ") True. Point is inside the triangle." RESET << std::endl;
        else
            std::cout << RED "(" << x << "," << y << ") False. Point is outside the triangle." RESET << std::endl;

        std::cout << "Do you want to continue? (Y/N): ";
        std::cin >> check;
    }

    return 0;
}
