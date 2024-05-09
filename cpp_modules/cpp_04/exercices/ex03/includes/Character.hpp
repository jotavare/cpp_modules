/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jotavare <jotavare@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/09 18:51:22 by jotavare          #+#    #+#             */
/*   Updated: 2024/05/09 18:56:04 by jotavare         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include "ICharacter.hpp"

class Character : public ICharacter
{
protected:
	static const int _inventorySize = 4;
	AMateria *_inventory[_inventorySize];
	std::string _name;

public:
	Character(void);
	Character(const std::string &name);
	Character(const Character &character);
	virtual ~Character();

	Character &operator=(const Character &character);

	const std::string &getName() const;
	void equip(AMateria *m);
	void unequip(int idx);
	void use(int idx, ICharacter &target);
	void printInventory(void) const;
};
