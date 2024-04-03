#include <iostream>

#define BOLD "\033[1m"
#define RESET "\033[0m"

int main(void)
{
    std::string message = "HI THIS IS BRAIN";
    std::string *ptr = &message;
    std::string &ref = message;

    std::cout << BOLD "Memory Address: " RESET <<&message << std::endl;
    std::cout << BOLD "Memory Address: " RESET <<ptr << std::endl;
    std::cout << BOLD "Memory Address: " RESET <<&ref << std::endl;

    std::cout << BOLD "Value: " RESET << message << std::endl;
    std::cout << BOLD "Value: " RESET << *ptr << std::endl;
    std::cout << BOLD "Value: " RESET << ref << std::endl;

    return (0);
}