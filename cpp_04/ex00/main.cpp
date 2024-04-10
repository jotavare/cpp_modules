/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jotavare <jotavare@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/10 14:13:32 by jotavare          #+#    #+#             */
/*   Updated: 2024/04/10 15:26:59 by jotavare         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"
#include "Dog.hpp"
#include "Cat.hpp"
#include "WrongAnimal.hpp"
#include "WrongCat.hpp"

int main()
{
    std::cout << "-----[Consctructors]-----" << std::endl;
    const Animal* meta = new Animal();
    const Animal* j = new Dog();
    const Animal* i = new Cat();
    const WrongAnimal* k = new WrongAnimal();
    const WrongAnimal* l = new WrongCat();
    std::cout << "-------------------------" << std::endl;
    std::cout << "" << std::endl;
    std::cout << "-----[Animal]-----" << std::endl;
    std::cout << meta->getType() << std::endl;
    std::cout << j->getType() << std::endl;
    std::cout << i->getType() << std::endl;
    std::cout << k->getType() << std::endl;
    std::cout << l->getType() << std::endl;
    std::cout << "------------------" << std::endl;
    std::cout << "" << std::endl;
    std::cout << "-----[Sound]-----" << std::endl;
    meta->makeSound();
    j->makeSound();
    i->makeSound();
    k->makeSound();
    l->makeSound();
    std::cout << "------------------" << std::endl;
    std::cout << "" << std::endl;
    std::cout << "-----[Destructors]-----" << std::endl;
    delete meta;
    delete i;
    delete j;
    delete l;
    delete k;
    std::cout << "-----------------------" << std::endl;

    return 0;
}
