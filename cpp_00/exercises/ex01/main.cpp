#include "includes/phonebook.hpp"

int main()
{
    PhoneBook phoneBook;
    string command;

    phoneBook.printMessage();
    while (true)
    {
        command = phoneBook.getCommand();
        if (command == "ADD")
            phoneBook.addContact();
        else if (command == "SEARCH")
            phoneBook.searchContact();
        else if (command == "EXIT")
        {
            cout << "Exiting program." << endl;
            return EXIT_SUCCESS;
        }
    }

    return EXIT_SUCCESS;
}
