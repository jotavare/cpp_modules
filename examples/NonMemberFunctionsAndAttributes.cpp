/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   NonMemberFunctionsAndAttributes.cpp                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jotavare <jotavare@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/06 12:13:59 by jotavare          #+#    #+#             */
/*   Updated: 2024/04/06 12:26:41 by jotavare         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "NonMemberFunctionsAndAttributes.hpp"

void   f0(void)
{
    Sample instance;

    std::cout << "Number of instances: " << instance.getNbInst() << std::endl;

    return;
}

void   f1(void)
{
    Sample instance;

    std::cout << "Number of instances: " << instance.getNbInst() << std::endl;
    f0();

    return;
}

int main()
{
    std::cout << "Number of instances: " << Sample::getNbInst() << std::endl;
    f1();
    std::cout << "Number of instances: " << Sample::getNbInst() << std::endl;

    return (0);
}

Sample::Sample(void)
{
    std::cout << "Constructor!" << std::endl;
    Sample::_nbInst += 1;

    return;
}

Sample::~Sample(void)
{
    std::cout << "Destructor!" << std::endl;
    Sample::_nbInst -= 1;

    return;
}

int Sample::getNbInst(void)
{
    return Sample::_nbInst;
}

int Sample::_nbInst = 0;