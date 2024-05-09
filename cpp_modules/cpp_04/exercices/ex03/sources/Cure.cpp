/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jotavare <jotavare@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/09 19:07:08 by jotavare          #+#    #+#             */
/*   Updated: 2024/05/09 19:07:09 by jotavare         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/Cure.hpp"

Cure::Cure(const Cure &cure) : AMateria(cure)
{
	if (0)
		std::cout << "copy constructor called" << std::endl;
	*this = cure;
}

void	Cure::use(ICharacter &target)
{
	std::cout << "* heals " << target.getName() << "'s wounds *" << std::endl;
}

Cure::Cure(void) : AMateria("cure")
{
	if (0)
		std::cout << "constructor called" << std::endl;
}

Cure	&Cure::operator=(const Cure &cure)
{
	(void)cure;
	return (*this);
}

Cure::~Cure()
{
	if (0)
		std::cout << "destructor called" << std::endl;
}

Cure	*Cure::clone() const
{
	return (new Cure(*this));
}
