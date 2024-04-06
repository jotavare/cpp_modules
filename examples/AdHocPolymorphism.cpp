/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   adHocPolymorphism.cpp                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jotavare <jotavare@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/06 14:50:52 by jotavare          #+#    #+#             */
/*   Updated: 2024/04/06 14:54:46 by jotavare         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "adHocPolymorphism.hpp"
#include <iostream>

Sample::Sample(void)
{
    std::cout << "Constructor!" << std::endl;
    return;
}

Sample::~Sample(void)
{
    std::cout << "Destructor!" << std::endl;
    return;
}

void Sample::bar(char const c) const
{
    std::cout << "Member function with char overload: " << c << std::endl;
    return;
}

void Sample::bar(int const n) const
{
    std::cout << "Member function with int overload: " << n << std::endl;
    return;
}

void Sample::bar(float const z) const
{
    std::cout << "Member function with float overload: " << z << std::endl;
    return;
}

void Sample::bar(Sample const &i) const
{
    (void)i;
    std::cout << "Member function with Sample overload" << std::endl;
    return;
}

int main()
{
    Sample instance;

    instance.bar('c');
    instance.bar(3);
    instance.bar(42.42f);
    instance.bar(instance);

    return (0);
}