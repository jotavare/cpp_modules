/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.hpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jotavare <jotavare@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/09 18:51:27 by jotavare          #+#    #+#             */
/*   Updated: 2024/05/09 18:56:19 by jotavare         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include "IMateriaSource.hpp"

class MateriaSource : public IMateriaSource
{
protected:
	static const int _inventorySize = 4;
	AMateria *_inventory[_inventorySize];

public:
	MateriaSource(void);
	MateriaSource(const MateriaSource &materiaSource);
	virtual ~MateriaSource();

	MateriaSource &operator=(const MateriaSource &materiaSource);

	void learnMateria(AMateria *m);
	AMateria *createMateria(const std::string &type);
};