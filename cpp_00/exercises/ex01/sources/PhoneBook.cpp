/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jotavare <jotavare@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/09 17:22:41 by pidsig            #+#    #+#             */
/*   Updated: 2024/05/09 17:25:11 by jotavare         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/PhoneBook.hpp"

// constructor initializes the number of contacts to zero
PhoneBook::PhoneBook() : numContacts(0) {}

// add a new contact to the phone book
void PhoneBook::addContact()
{
  // maximum number of contacts is reached? shift contacts to make space for the new one
  if (numContacts == maxContacts)
  {
    for (int i = 0; i < maxContacts - 1; ++i)
      contacts[i] = contacts[i + 1];
    --numContacts;
  }

  // create a new contact and prompt the user to enter details
  Contact newContact;
  std::string input;

  // ensure each field is not empty
  do
  {
    std::cout << BOLD "First name: " RESET;
    std::getline(std::cin, newContact.firstName);
  } while (newContact.firstName.empty());

  do
  {
    std::cout << BOLD "Last name: " RESET;
    std::getline(std::cin, newContact.lastName);
  } while (newContact.lastName.empty());

  do
  {
    std::cout << BOLD "Nickname: " RESET;
    std::getline(std::cin, newContact.nickname);
  } while (newContact.nickname.empty());

  do
  {
    std::cout << BOLD "Phone Number: " RESET;
    std::getline(std::cin, newContact.phoneNumber);
  } while (newContact.phoneNumber.empty());

  do
  {
    std::cout << BOLD "Darkest secret: " RESET;
    std::getline(std::cin, newContact.darkestSecret);
  } while (newContact.darkestSecret.empty());

  // all fields are filled? add the new contact to the phone book
  contacts[numContacts++] = newContact;
  std::cout << GREEN "Contact added successfully!" RESET << std::endl;
}

// search for and display a contact information
void PhoneBook::searchContact()
{
  // phone book is empty? inform the user and return
  if (numContacts == 0)
  {
    std::cout << RED "Phonebook is empty.\n" RESET;
    return;
  }

  // phone book is not empty? display contact information in a formatted table
  std::cout << std::setw(10);
  std::cout << BOLD "       Index " RESET << std::setw(10);
  std::cout << BOLD "| First Name " RESET << std::setw(10);
  std::cout << BOLD "|  Last Name " RESET << std::setw(10);
  std::cout << BOLD "|   Nickname " RESET << std::endl;

  // truncate long names to fit in the table
  for (int i = 0; i < numContacts; ++i)
  {
    std::cout << std::setw(12) << i << BOLD " | " RESET << std::setw(10)
              << truncateString(contacts[i].firstName) << BOLD " | " RESET << std::setw(10)
              << truncateString(contacts[i].lastName) << BOLD " | " RESET << std::setw(10)
              << truncateString(contacts[i].nickname) << std::endl;
  }

  // prompt the user to enter the index of the contact to display
  while (true)
  {
    int index;
    std::cout << BOLD "Enter the index of the contact to display: " RESET;
    std::cin >> index;

    // ensure the input is valid (within range)
    if (std::cin.fail() || index >= numContacts || index < 0)
    {
      std::cin.clear();
      std::cin.ignore(INT_MAX, '\n');
      std::cout << "Invalid index. Insert an index between 0-"
                << numContacts - 1 << "." << std::endl;
    }

    // if input is valid, display the contact and return
    else if (index >= 0 && index <= numContacts)
    {
      displayContact(contacts[index]);
      return;
    }
  }
}

// print the details of specified contact
void PhoneBook::displayContact(const Contact &contact)
{
  std::cout << BOLD "First name: " RESET << contact.firstName << std::endl;
  std::cout << BOLD "Last name: " RESET << contact.lastName << std::endl;
  std::cout << BOLD "Nickname: " RESET << contact.nickname << std::endl;
  std::cout << BOLD "Phone number: " RESET << contact.phoneNumber << std::endl;
  std::cout << BOLD "Darkest secret: " RESET << contact.darkestSecret << std::endl;
}
