/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   References4.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jotavare <jotavare@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/06 13:28:32 by jotavare          #+#    #+#             */
/*   Updated: 2024/04/06 13:36:31 by jotavare         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>

/*
 * Reference if the object will existe always
 * Pointer if the object can be destroyed
 */

class Student
{
private:
    std::string _login;

public:
    Student(std::string const &login) : _login(login)
    {
        std::cout << "Student " << this->_login << " is born" << std::endl;
    }

    std::string &getLoginRef()
    {
        return (this->_login);
    }

    std::string const &getLoginRefConst() const
    {
        return (this->_login);
    }

    std::string *getLoginPtr()
    {
        return (&this->_login);
    }

    std::string const *getLoginPtrConst() const
    {
        return (&this->_login);
    }

    ~Student(void)
    {
        std::cout << "Student " << this->_login << " died" << std::endl;
    }
};

int main()
{
    Student bob = Student("bfubar");
    Student const jim = Student("jfubar");

    std::cout << bob.getLoginRefConst() << " " << jim.getLoginRefConst() << std::endl;
    std::cout << *bob.getLoginPtrConst() << " " << *jim.getLoginPtrConst() << std::endl;

    bob.getLoginRef() = "bobfubar";
    std::cout << bob.getLoginRefConst() << std::endl;

    *bob.getLoginPtr() = "bobbyfubbar";
    std::cout << *bob.getLoginPtrConst() << std::endl;

    return (0);
}
