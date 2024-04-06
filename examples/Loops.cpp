/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Loops.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jotavare <jotavare@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/06 11:00:57 by jotavare          #+#    #+#             */
/*   Updated: 2024/04/06 11:00:58 by jotavare         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

int main()
{
    std::cout << "Loops" << std::endl;
    std::cout << "Loops" << std::endl;
    std::cout << "Loops" << std::endl;
    std::cout << "Loops" << std::endl;
    std::cout << "Loops" << std::endl;
}

int main()
{
    for (int i = 0; i < 5; i++)
        std::cout << "Loops" << std::endl;

    int i = 0;

    while (i < 5)
    {
        std::cout << "Loops" << std::endl;
        i++;
    }

    do
    {
        std::cout << "Loops" << std::endl;
        i++;
    } while (i < 5);

    std::cin.get();
}

int main()
{
    int i = 0;
    bool condition = true;

    for (; condition; )
        std::cout << "Loops" << std::endl;
        if(!(i < 5))
            condition = false;

    std::cin.get();
}