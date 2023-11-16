#include "includes/phonebook.hpp"

int main() {
  PhoneBook phoneBook;
  std::string command;

  phoneBook.printMessage();
  while (true) {
    std::getline(std::cin, command);

    if (command == "ADD")
      phoneBook.addContact();
    else if (command == "SEARCH")
      phoneBook.searchContact();
    else if (command == "EXIT" || std::cin.eof()) {
      std::cout << "Exiting program." << std::endl;
      return EXIT_SUCCESS;
    }
  }

  return EXIT_SUCCESS;
}
