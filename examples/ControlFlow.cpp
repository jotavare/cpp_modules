/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ControlFlow.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jotavare <jotavare@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/06 11:01:59 by jotavare          #+#    #+#             */
/*   Updated: 2024/04/06 11:02:00 by jotavare         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

int main()
{
    for (int i = 0; i < 5; i++)
    {
        std::cout << i << std::endl;
        if (i % 2 == 0)
            continue;
        std::cout << i << std::endl;
    }
}

int main()
{
    for (int i = 0; i < 5; i++)
    {
        std::cout << i << std::endl;
        if (i % 2 == 0)
            break;
        ;
        std::cout << i << std::endl;
    }
}

int main()
{
    for (int i = 0; i < 5; i++)
    {
        std::cout << i << std::endl;
        if (i % 2 == 0)
            return (0);
        std::cout << i << std::endl;
    }
}