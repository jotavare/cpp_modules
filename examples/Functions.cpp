/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Functions.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jotavare <jotavare@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/06 11:01:56 by jotavare          #+#    #+#             */
/*   Updated: 2024/04/06 11:01:57 by jotavare         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

/*
 * Various ways of doing the same function with less lines;
 */

int Multiply(int a, int b)
{
    return a * b;
}

void MultiplyDirectly()
{
    std::cout << 5 * 8 << std::endl;
}

void MultiplyAndLog(int a, int b)
{
    int result = Multiply(a, b);
    std::cout << result << std::endl;
}

int main()
{
    int result1 = Multiply(5, 8);
    std::cout << result1 << std::endl;

    MultiplyDirectly();

    MultiplyAndLog(5, 8);
    std::cin.get();

    return (0);
}