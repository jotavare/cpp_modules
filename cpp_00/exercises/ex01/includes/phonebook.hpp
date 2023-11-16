#ifndef PHONEBOOK_HPP
#define PHONEBOOK_HPP

#include "contact.hpp"

class PhoneBook {
public:
  PhoneBook();
  ~PhoneBook(){};

  void addContact();
  void searchContact();
  void printMessage();

private:
  static const int maxContacts = 8;
  Contact contacts[maxContacts];
  int numContacts;

  std::string getCommand();
  std::string truncateString(const std::string &str);
  void displayContact(const Contact &contact);
};

#endif
