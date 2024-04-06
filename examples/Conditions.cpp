/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Conditions.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jotavare <jotavare@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/06 11:02:58 by jotavare          #+#    #+#             */
/*   Updated: 2024/04/06 11:02:59 by jotavare         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

int main()
{
    // constant is a value that cannot be changed;
    const char *ptr = nullptr;
    if (ptr)
        std::cout << "ptr is not null" << std::endl;
    // this is basicly a else and then another if nested else > if;
    else if (ptr == "hello")
        std::cout << "ptr is hello" << std::endl;
    else
        std::cout << "ptr is null" << std::endl;
}