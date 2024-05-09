/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jotavare <jotavare@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/09 19:07:05 by jotavare          #+#    #+#             */
/*   Updated: 2024/05/09 19:07:06 by jotavare         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/MateriaSource.hpp"

MateriaSource::MateriaSource(const MateriaSource &materiaSource)
{
	if (0)
		std::cout << "copy constructor called" << std::endl;
	*this = materiaSource;
}

AMateria	*MateriaSource::createMateria(const std::string &type)
{
	for (int i = 0; i < _inventorySize; i++)
	{
		if (_inventory[i] != NULL && _inventory[i]->getType() == type)
			return (_inventory[i]->clone());
	}
	std::cout << "can't create " << type << " materia (not learned)" << std::endl;
	return (NULL);
}

void		MateriaSource::learnMateria(AMateria *m)
{
	for (int i = 0; i < _inventorySize; i++)
	{
		if (_inventory[i] == NULL)
		{
			std::cout << "learning " << m->getType() << std::endl;
			_inventory[i] = m;
			return ;
		}
	}
	std::cout << "can't learn new materia (inventory full)" << std::endl;
	std::cout << "...deleting materia" << std::endl;
	delete m;
}

MateriaSource::MateriaSource(void)
{
	if (0)
		std::cout << "constructor called" << std::endl;
	for (int i = 0; i < _inventorySize; i++)
		_inventory[i] = NULL;
}

MateriaSource::~MateriaSource()
{
	if (0)
		std::cout << "destructor called" << std::endl;
	for (int i = 0; i < _inventorySize; i++)
	{
		if (_inventory[i])
			delete _inventory[i];
	}
}

MateriaSource	&MateriaSource::operator=(const MateriaSource &materiaSource)
{
	if (this != &materiaSource)
	{
		for (int i = 0; i < _inventorySize; i++)
		{
			if (_inventory[i])
				delete _inventory[i];
			if (materiaSource._inventory[i])
				_inventory[i] = materiaSource._inventory[i]->clone();
			else
				_inventory[i] = NULL;
		}
	}
	return (*this);
}
