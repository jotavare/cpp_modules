/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jotavare <jotavare@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/09 18:57:37 by jotavare          #+#    #+#             */
/*   Updated: 2024/05/09 19:07:11 by jotavare         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/AMateria.hpp"

AMateria::AMateria(void) : _type("unknown") {}

AMateria::AMateria(const std::string &type) : _type(type) {}

AMateria::AMateria(const AMateria &aMateria) { *this = aMateria; }

AMateria::~AMateria() {}

AMateria &AMateria::operator=(const AMateria &aMateria) {
    if (this != &aMateria)
        _type = aMateria._type;
    return (*this);
}

std::string const &AMateria::getType() const { return (_type); }

void AMateria::use(ICharacter &target) {
    std::cout << "is doing something weird on " << target.getName() << std::endl;
}