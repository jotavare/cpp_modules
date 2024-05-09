/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jotavare <jotavare@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/09 17:22:46 by pidsig            #+#    #+#             */
/*   Updated: 2024/05/09 17:25:08 by jotavare         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/PhoneBook.hpp"

/*
 * truncate a string to a specified width
 * @param str - the string to truncate
 * @return the truncated string
 */
std::string PhoneBook::truncateString(const std::string &str)
{
  static const int width = 10;
  if (str.length() > width)
    return str.substr(0, width - 1) + '.';
  return str;
}

/*
 * print phonebook menu options
 */
void PhoneBook::printMessage()
{
  std::cout << "#################### Phonebook ####################\n";
  std::cout << "##                                               ##\n";
  std::cout << "##     ADD - Add a new contact.                  ##\n";
  std::cout << "##     SEARCH - Display contact info.            ##\n";
  std::cout << "##     EXIT - Exit phonebook.                    ##\n";
  std::cout << "##                                               ##\n";
  std::cout << "###################################################\n";
}

/*
 * clear the console screen
 * plataform specific (windows, linux, macOS)
 */
void PhoneBook::clear()
{
#if defined _WIN32
  system("cls");
#elif defined(__LINUX__) || defined(__gnu_linux__) || defined(__linux__)
  system("clear");
#elif defined(__APPLE__)
  system("clear");
#endif
}
