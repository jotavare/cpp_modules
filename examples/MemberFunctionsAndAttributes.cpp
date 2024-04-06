/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   memberFunctionsAndAttributes.cpp                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jotavare <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/05 11:46:02 by jotavare          #+#    #+#             */
/*   Updated: 2024/04/05 12:12:02 by jotavare         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "memberFunctionsAndAttributes.hpp"

int	main()
{
	// instance is a stack variable not a pointer
	// if it was i had to use ->
	Sample	instance;

	instance.foo = 42;
	std::cout << "instance.foo " << instance.foo << std::endl;

	instance.bar();
	return (0);
}

Sample::Sample(void)
{
	std::cout << "Constructor called!" << std::endl;
	return;
}

Sample::~Sample(void)
{
	std::cout << "Destructor called!" << std::endl;
	return;
}

void	Sample::bar(void)
{
	std::cout << "Member function 'Bar' called!" << std::endl;
	return;
}

