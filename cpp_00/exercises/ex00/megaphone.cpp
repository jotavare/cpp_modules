/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jotavare <jotavare@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/03 16:51:34 by jotavare          #+#    #+#             */
/*   Updated: 2024/04/03 16:51:35 by jotavare         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream> // cout, endl
#include <cctype>   // toupper

/*
 * Note: I can use elements from the standard library without using the prefix `std::`
 * Instead of std::cout or std::endl I can use cout or endl directly. (using namespace std;)
 * Instead of std::endl which flushes the buffer, i can use '\n' which is faster.
 * Usually we flush to ensure that the output is printed immediately.
 * I don't think its necessary in this case.
 *
 * Could also use size_t instead of int because size_t is unsigned and int is signed,
 * semantically it's used to store size or index of an array, but since argc is of
 * type int, I'll use int.
 */
std::string messageUpperCase(std::string message)
{
    for (size_t i = 0; i < message.length(); ++i)
    {
        if (std::isalpha(message[i]))
            message[i] = std::toupper(message[i]);
    }
    return message;
}

int main(int argc, char **argv)
{
    if (argc == 1)
    {
        std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *" << '\n';
        return 0;
    }

    for (int i = 1; i < argc; i++)
        std::cout << messageUpperCase(argv[i]);

    std::cout << '\n';
    return 0;
}
