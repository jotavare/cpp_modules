/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   this.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jotavare <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/05 12:30:20 by jotavare          #+#    #+#             */
/*   Updated: 2024/04/05 14:10:10 by jotavare         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "this.hpp"

/*
 * this->foo is a pointer in the current instance
 * we can know this way that we are using an attribute from the class
 */

int	main()
{
	Sample instance;

	return (0);
}

Sample::Sample(void)
{
	std::cout << "Constructor!" << std::endl;

	this->foo = 42;
	std::cout << "this->foo: " << this->foo << std::endl;

	this->bar();

	return;
}

Sample::~Sample()
{
	std::cout << "Destructor!" << std::endl;
	return;
}

void	Sample::bar(void)
{
	std::cout << "Member function!" << std::endl;
	return;
}
