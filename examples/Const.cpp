/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Const.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jotavare <jotavare@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/05 15:25:45 by jotavare          #+#    #+#             */
/*   Updated: 2024/04/06 11:02:42 by jotavare         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Const.hpp"

int main()
{
	Sample instance(3.14f);

	instance.bar();

	return (0);
}

/*
 * we are not assigning the f value to the pi attribute
 * we are inicializing my pi attribute to the f value
 * const variable becomes a read-only variable
 */

Sample::Sample(float const f) : pi(f), qd(42)
{
	std::cout << "Constructor!" << std::endl;
	return;
}

Sample::~Sample(void)
{
	std::cout << "Destructor!" << std::endl;
	return;
}

/*
 * using const in a function will not alter the current instance
 * seems like its a good practice to use it if its not gonna change anything
 */

void Sample::bar(void) const
{
	std::cout << "this->pi - " << this->pi << std::endl;
	std::cout << "this->qd - " << this->qd << std::endl;

	// this won't work because we are trying to change a const variable
	// this->qd = 0;

	return;
}
