#ifndef CONTACT_HPP
#define CONTACT_HPP

// libraries
#include <cstdlib>  // EXIT_SUCCESS
#include <iomanip>  // std::setw
#include <iostream> // std::cout, std::cin, std::endl, std::string
#include <limits.h> // INT_MAX

// colored output
#define RED "\e[31m"    // Red color
#define GREEN "\e[32m"  // Green color
#define RESET "\e[0m"   // Reset color
#define BOLD "\e[1m"    // Bold formatting

class Contact
{
public:
  std::string firstName;
  std::string lastName;
  std::string nickname;
  std::string phoneNumber;
  std::string darkestSecret;
};

#endif
