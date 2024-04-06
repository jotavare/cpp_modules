/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClassesAndInstances.cpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jotavare <jotavare@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/05 11:24:14 by jotavare          #+#    #+#             */
/*   Updated: 2024/04/06 11:03:13 by jotavare         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "ClassesAndInstances.hpp"

/*
 * consctructors and destructors dont have a return type
 * with return or no return it would act the same way
 */

int main()
{
	/*
	 * in C its like doing a variable of the class Sample called instance
	 * C++ we call it an instance of the Sample class
	 */

	Sample instance;
	return (0);
}

Sample::Sample(void)
{
	std::cout << "Constructor was called!" << std::endl;
	return;
}

Sample::~Sample(void)
{
	std::cout << "Destructor was called!" << std::endl;
	return;
}
