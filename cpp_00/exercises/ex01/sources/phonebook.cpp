#include "../includes/phonebook.hpp"

PhoneBook::PhoneBook() : numContacts(0) {}

void PhoneBook::addContact() {
  if (numContacts == maxContacts) {
    for (int i = 0; i < maxContacts - 1; ++i)
      contacts[i] = contacts[i + 1];
    --numContacts;
  }

  Contact newContact;
  std::string input;

  do {
    std::cout << BOLD "First name: " RESET;
    std::getline(std::cin, newContact.firstName);
  } while (newContact.firstName.empty());

  do {
    std::cout << BOLD "Last name: " RESET;
    std::getline(std::cin, newContact.lastName);
  } while (newContact.lastName.empty());

  do {
    std::cout << BOLD "Nickname: " RESET;
    std::getline(std::cin, newContact.nickname);
  } while (newContact.nickname.empty());

  do {
    std::cout << BOLD "Phone Number: " RESET;
    std::getline(std::cin, newContact.phoneNumber);
  } while (newContact.phoneNumber.empty());

  do {
    std::cout << BOLD "Darkest secret: " RESET;
    std::getline(std::cin, newContact.darkestSecret);
  } while (newContact.darkestSecret.empty());

  contacts[numContacts++] = newContact;
  std::cout << GREEN "Contact added successfully!" RESET << std::endl;
}

void PhoneBook::searchContact() {
  if (numContacts == 0) {
    std::cout << RED "Phonebook is empty.\n" RESET;
    return;
  }

  std::cout << std::setw(10);
  std::cout << BOLD "       Index " RESET << std::setw(10);
  std::cout << BOLD "| First Name " RESET << std::setw(10);
  std::cout << BOLD "|  Last Name " RESET << std::setw(10);
  std::cout << BOLD "|   Nickname " RESET << std::endl;

  for (int i = 0; i < numContacts; ++i) {
    std::cout << std::setw(12) << i << BOLD " | " RESET << std::setw(10)
              << truncateString(contacts[i].firstName) << BOLD " | " RESET << std::setw(10)
              << truncateString(contacts[i].lastName) << BOLD " | " RESET << std::setw(10)
              << truncateString(contacts[i].nickname) << std::endl;
  }

  while (true) {
    int index;
    std::cout << BOLD "Enter the index of the contact to display: " RESET;
    std::cin >> index;

    if (std::cin.fail() || index >= numContacts || index < 0) {
      std::cin.clear();
      std::cin.ignore(INT_MAX, '\n');
      std::cout << "Invalid index. Insert an index between 0-"
                << numContacts - 1 << "." << std::endl;
    }

    else if (index >= 0 && index <= numContacts) {
      displayContact(contacts[index]);
      return;
    }
  }
}

void PhoneBook::displayContact(const Contact &contact) {
  std::cout << BOLD "First name: " RESET << contact.firstName << std::endl;
  std::cout << BOLD "Last name: " RESET << contact.lastName << std::endl;
  std::cout << BOLD "Nickname: " RESET << contact.nickname << std::endl;
  std::cout << BOLD "Phone number: " RESET << contact.phoneNumber << std::endl;
  std::cout << BOLD "Darkest secret: " RESET << contact.darkestSecret << std::endl;
}