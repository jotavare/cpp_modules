/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jotavare <jotavare@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/03 16:51:55 by jotavare          #+#    #+#             */
/*   Updated: 2024/04/03 16:51:56 by jotavare         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/PhoneBook.hpp"

int main()
{
  PhoneBook phoneBook; // create a phonebook object
  std::string command; // create a string to store user input commands

  phoneBook.printMessage(); // print phonebook menu

  // loop to continuously accept user commands until the program is exited
  while (true)
  {
    std::getline(std::cin, command); // get user input command

    // check the user command
    if (command == "ADD") // add a contact
    {
      phoneBook.clear();
      phoneBook.printMessage();
      phoneBook.addContact();
    }
    else if (command == "SEARCH") // search for a contact
    {
      phoneBook.clear();
      phoneBook.printMessage();
      phoneBook.searchContact();
    }
    else if (command == "EXIT" || std::cin.eof()) // exit the program
    {
      phoneBook.clear();
      std::cout << RED "Exiting program..." RESET << std::endl;
      return EXIT_SUCCESS;
    }
  }

  return EXIT_SUCCESS;
}
