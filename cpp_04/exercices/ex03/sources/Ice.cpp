/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jotavare <jotavare@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/09 19:07:07 by jotavare          #+#    #+#             */
/*   Updated: 2024/05/09 19:07:08 by jotavare         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/Ice.hpp"

Ice::Ice(const Ice &ice) : AMateria(ice)
{
	if (0)
		std::cout << "copy constructor called" << std::endl;
	*this = ice;
}

void	Ice::use(ICharacter &target)
{
	std::cout << "* shoots an ice bolt at " << target.getName() << " *" << std::endl;
}

Ice	&Ice::operator=(const Ice &ice)
{
	(void)ice;
	return (*this);
}

Ice::Ice(void) : AMateria("ice")
{
	if (0)
		std::cout << "constructor called" << std::endl;
}

Ice::~Ice()
{
	if (0)
		std::cout << "destructor called" << std::endl;
}

Ice	*Ice::clone() const
{
	return (new Ice(*this));
}
