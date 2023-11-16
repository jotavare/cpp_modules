#include "../includes/phonebook.hpp"

std::string PhoneBook::truncateString(const std::string &str) {
  static const int width = 10;
  if (str.length() > width)
    return str.substr(0, width - 1) + '.';
  return str;
}

void PhoneBook::printMessage() {
  std::cout << "#################### Phonebook ####################\n";
  std::cout << "##                                               ##\n";
  std::cout << "##     ADD - Add a new contact.                  ##\n";
  std::cout << "##     SEARCH - Display contact info.            ##\n";
  std::cout << "##     EXIT - Exit phonebook.                    ##\n";
  std::cout << "##                                               ##\n";
  std::cout << "###################################################\n";
}