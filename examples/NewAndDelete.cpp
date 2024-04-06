/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   NewAndDelete.cpp                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jotavare <jotavare@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/06 12:51:49 by jotavare          #+#    #+#             */
/*   Updated: 2024/04/06 13:04:22 by jotavare         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "NewAndDelete.hpp"

int main()
{
    Student bob = Student("bfubar");
    Student *jim = new Student("jfubar");

    delete jim; // jim is destroyed

    return (0); // bob is destroyed
}

/*
int main()
{
    Student *students = new Student[42];

    delete [] students;
}
*/