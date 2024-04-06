/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   initList2.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jotavare <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/05 14:44:37 by jotavare          #+#    #+#             */
/*   Updated: 2024/04/05 15:22:33 by jotavare         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "initList2.hpp"

Sample2::Sample2(char p1, int p2, float p3) : a1(p1), a2(p2), a3(p3)
{
	std::cout << "Constructor two!" << std::endl;
	std::cout << "this->a1 = " << this->a1 << std::endl;
	std::cout << "this->a2 = " << this->a2 << std::endl;
	std::cout << "this->a3 = " << this->a3 << std::endl;
}

Sample2::~Sample2(void)
{
	std::cout << "Destructor two!" << std::endl;
	return;
}
