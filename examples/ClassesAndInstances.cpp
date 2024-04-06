/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   classesAndInstances.cpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jotavare <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/05 11:24:14 by jotavare          #+#    #+#             */
/*   Updated: 2024/04/05 11:49:15 by jotavare         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "classesAndInstances.hpp"

/*
 * consctructors and destructors dont have a return type
 * with return or no return it would act the same way
 */

int	main()
{
	/*
	 * in C its like doing a variable of the class Sample called instance
	 * C++ we call it an instance of the Sample class
	 */

	Sample	instance;
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

