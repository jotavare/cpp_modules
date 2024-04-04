/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jotavare <jotavare@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/04 12:28:02 by jotavare          #+#    #+#             */
/*   Updated: 2024/04/04 17:44:48 by jotavare         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

#define BOLD "\033[1m"
#define RESET "\033[0m"

int main(void)
{
    std::string string = "HI THIS IS BRAIN";
    std::string *stringPTR = &string;
    std::string &stringREF = string;

    std::cout << BOLD "[string] Memory Address: " RESET << &string << std::endl;
    std::cout << BOLD "[stringPTR] Memory Address: " RESET << stringPTR << std::endl;
    std::cout << BOLD "[stringREF] Memory Address: " RESET << &stringREF << std::endl;

    std::cout << BOLD "[string] Value: " RESET << string << std::endl;
    std::cout << BOLD "[stringPTR] Value: " RESET << *stringPTR << std::endl;
    std::cout << BOLD "[stringREF] Value: " RESET << stringREF << std::endl;

    return (0);
}
