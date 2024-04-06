/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   initList1.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jotavare <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/05 14:25:50 by jotavare          #+#    #+#             */
/*   Updated: 2024/04/05 15:23:18 by jotavare         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "initList1.hpp"

Sample1::Sample1(char p1, int p2, float p3)
{
	std::cout << "Constructor one!" << std::endl;

	this->a1 = p1;
	std::cout << "this->a1 = " << this->a1 << std::endl;

	this->a2 = p2;
	std::cout << "this->a2 = " << this->a2 << std::endl;

	this->a3 = p3;
	std::cout << "this->a3 = " << this->a3 << std::endl;

	return;
}

Sample1::~Sample1(void)
{
	std::cout << "Destructor one!" << std::endl;
	return;
}

