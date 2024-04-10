/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jotavare <jotavare@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/10 14:13:32 by jotavare          #+#    #+#             */
/*   Updated: 2024/04/10 17:49:44 by jotavare         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"
#include "Cat.hpp"
#include <iostream>
#include <cstdlib>
#include <ctime>

int main()
{
	std::srand(std::time(NULL));
    
    std::cout << "---- manual constructors ----" << std::endl;
    Animal *zoo[10];
    
    for (int i = 0; i < 5; i++)
            zoo [i] = new Dog();
        
    for (int i = 5; i < 10; i++)
            zoo [i] = new Cat();        

    std::cout << "\n---- manual destructors ----" << std::endl;
    for (int i = 0; i < 10; i++)
        delete zoo[i];

    std::cout << "\n---- subject ----" << std::endl;
    const Animal* j = new Dog();
	const Animal* i = new Cat();
	delete j;
	delete i;

    Cat Jeff;
	Dog Bob;

	Cat Jeff_assigned;
	Dog Bob_assigned;

	Jeff_assigned = Jeff;
	Bob_assigned = Bob;

	Cat Jeff_copy_construct(Jeff);
	Dog Bob_copy_construct(Bob);

	/*
	 * If Cat and Dog implement shallow copy for their copy constructor
	 * and assignment operator, then Jeff_assigned and Bob_assigned
	 * would have the same brain address as Jeff and Bob, respectively.
	 * This is because they would all be pointing to the same brain object.
	*/

	/*
	 * If Cat and Dog implement deep copy for their copy constructor and
	 * assignment operator, then Jeff_copy_construct and Bob_copy_construct
	 * would have different brain addresses from Jeff and Bob, respectively.
	 * This is because a new brain object would be created for each of them.
	*/

	std::cout << "\n---- shallow and deep copys ----" << std::endl;

	std::cout << "Jeff's original address: ";
	Jeff.brainAddress();
	std::cout << "Bob's original address: ";
	Bob.brainAddress();

	std::cout << std::endl;
	std::cout << "Shallow:" << std::endl;
	std::cout << "Jeff's copied address: ";
	Jeff_assigned.brainAddress();
	std::cout << "Bob's copied address: ";
	Bob_assigned.brainAddress();

	std::cout << std::endl;
	std::cout << "Deep:" << std::endl;
	std::cout << "Jeff's copy constructed address: ";
	Jeff_copy_construct.brainAddress();
	std::cout << "Bob's copy constructed address: ";
	Bob_copy_construct.brainAddress();

	std::cout << std::endl;
	std::cout << "---- destructor ----" << std::endl;

	return 0;
}
