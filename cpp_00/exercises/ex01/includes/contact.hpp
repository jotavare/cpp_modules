#ifndef CONTACT_HPP
#define CONTACT_HPP

#include <cstdlib>  // EXIT_SUCCESS
#include <iomanip>  // std::setw
#include <iostream> // std::cout, std::cin, std::endl, std::string
#include <limits.h> // INT_MAX

#define RED "\e[31m"
#define GREEN "\e[32m"
#define RESET "\e[0m"
#define BOLD "\e[1m"

class Contact {
public:
  std::string firstName;
  std::string lastName;
  std::string nickname;
  std::string phoneNumber;
  std::string darkestSecret;
};

#endif
