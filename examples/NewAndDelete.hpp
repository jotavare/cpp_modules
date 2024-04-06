/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   newAndDelete.hpp                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jotavare <jotavare@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/06 12:51:51 by jotavare          #+#    #+#             */
/*   Updated: 2024/04/06 12:58:16 by jotavare         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef NEWANDDELETE_HPP
#define NEWANDDELETE_HPP

#include <iostream>

class Student
{
private:
    std::string _login;

public:
    Student(std::string login) : _login(login)
    {
        std::cout << "Student " << this->_login << " is born" << std::endl;
    }

    ~Student(void)
    {
        std::cout << "Student " << this->_login << " died" << std::endl;
    }
};

#endif