/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   References2.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jotavare <jotavare@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/06 11:01:18 by jotavare          #+#    #+#             */
/*   Updated: 2024/04/06 13:23:18 by jotavare         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

int main()
{
    int numberOfBalls = 5;

    int *ballsPtr = &numberOfBalls;
    int &ballsRef = numberOfBalls;

    std::cout << numberOfBalls << " " << *ballsPtr << " " << ballsRef << std::endl;

    *ballsPtr = 21;
    std::cout << numberOfBalls << std::endl;
    ballsRef = 84;
    std::cout << numberOfBalls << std::endl;

    return (0);
}
