/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   References1.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jotavare <jotavare@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/06 13:23:04 by jotavare          #+#    #+#             */
/*   Updated: 2024/04/06 13:23:12 by jotavare         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
 * Unlike pointers that can point to null, references cannot be null;
 * They must be referencing a valid object;
 * They are just sintax sugar;
 * Theres nothing they can do that pointers cant;
 * Use them in cases that pointers are not needed, so it looks cleaner;
 */

#include <iostream>

void Increment(int *value)
{
    (*value)++;
}

int main()
{
    int a = 5;
    Increment(&a);

    std::cin.get();
}

void Increment(int &value)
{
    value++;
}

int main()
{
    int a = 5;
    Increment(a);

    std::cin.get();
}
