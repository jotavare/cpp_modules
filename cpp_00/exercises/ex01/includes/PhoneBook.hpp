/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jotavare <jotavare@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/03 16:51:52 by jotavare          #+#    #+#             */
/*   Updated: 2024/05/09 17:25:03 by jotavare         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_HPP
#define PHONEBOOK_HPP

// libraries
#include "Contact.hpp"

class PhoneBook
{
public:
  // constructor and destructor
  PhoneBook();
  ~PhoneBook(){};

  // functions
  void addContact();
  void searchContact();
  void printMessage();
  void clear();

private:
  // variables
  static const int maxContacts = 8; // maximum number of contacts
  Contact contacts[maxContacts];    // array to store contacts
  int numContacts;                  // current number of contacts

  // functions
  std::string getCommand();
  std::string truncateString(const std::string &str);
  void displayContact(const Contact &contact);
};

#endif
