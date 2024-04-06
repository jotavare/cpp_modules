/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Pointers.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jotavare <jotavare@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/06 11:01:13 by jotavare          #+#    #+#             */
/*   Updated: 2024/04/06 11:01:15 by jotavare         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <cstring>

int main()
{
    // creating data on the stack
    int var = 42;

    // pointer to a variable of type int that will store the address of var;
    // void *ptr = &var;
    int *ptr = &var;

    // dereference the pointer, i can now manipulate/access the value of var;
    *ptr = 10;

    /*
     * types doesnt really matter, they are just a way to us programmers
     * manipulate the data and the compiler to understand, the computer
     * doesnt care about the type;
     * pointers are just interegers that store memory addresses;
     */

    // all these pointers are the same;
    void *ptr1 = nullptr;
    void *ptr2 = NULL;
    void *ptr3 = 0;

    // creating data on the heap
    char *buffer = new char[8];
    memset(buffer, 0, 8);

    char **ptr = &buffer;

    delete[] buffer;
    std::cin.get();
}