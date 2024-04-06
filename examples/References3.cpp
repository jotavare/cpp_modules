/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   References3.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jotavare <jotavare@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/06 13:23:24 by jotavare          #+#    #+#             */
/*   Updated: 2024/04/06 13:34:17 by jotavare         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>

void byPtr(std::string *str)
{
    *str += " and ponies";
}

void byConstPtr(std::string const *str)
{
    std::cout << *str << std::endl;
}

void byRef(std::string &str)
{
    str += " and ponies";
}

void byConstRef(std::string const &str)
{
    std::cout << str << std::endl;
}

int main()
{
    std::string str = "I like butterflies";

    std::cout << str << std::endl;
    byPtr(&str);
    byConstPtr(&str);

    str = "I like otters";

    std::cout << str << std::endl;
    byRef(str);
    byConstRef(str);

    return (0);
}
