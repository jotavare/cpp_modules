/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jotavare <jotavare@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/04 14:08:49 by jotavare          #+#    #+#             */
/*   Updated: 2024/04/04 17:21:43 by jotavare         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

Harl::Harl()
{
    std::cout << "I am Harl created." << std::endl;
}

Harl::~Harl()
{
    std::cout << "Harl destroyed." << std::endl;
}

void Harl::debug(void)
{
    std::cout << "I love having extra bacon for my 7XL-double-cheese-triple-pickle-special-ketchup burger.I really do !" << std::endl;
}

void Harl::info()
{
    std::cout << "I cannot believe adding extra bacon costs more money. You didn’t put enough bacon in my burger! If you did, I wouldn’t be asking for more!" << std::endl;
}

void Harl::warning()
{
    std::cout << "I think I deserve to have some extra bacon for free. I’ve been coming for years whereas you started working here since last month." << std::endl;
}

void Harl::error()
{
    std::cout << "This is unacceptable! I want to speak to the manager now." << std::endl;
}

void Harl::complain(std::string level)
{
    // array of four pointers and assign the addresses of the four functions
    void (Harl::*harl_functions[4])();
    harl_functions[0] = &Harl::debug;
    harl_functions[1] = &Harl::info;
    harl_functions[2] = &Harl::warning;
    harl_functions[3] = &Harl::error;

    std::string levels[4];
    levels[0] = "DEBUG";
    levels[1] = "INFO";
    levels[2] = "WARNING";
    levels[3] = "ERROR";

    for (int i = 0; i < 4; i++)
        if (level == levels[i])
            (this->*harl_functions[i])();
}
