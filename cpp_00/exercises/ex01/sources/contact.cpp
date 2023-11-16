#include "../includes/phonebook.hpp"

string PhoneBook::truncateString(const string &str)
{
    static const int width = 10;
    if (str.length() > width)
        return str.substr(0, width - 1) + '.';
    return str;
}

void PhoneBook::printMessage()
{
    cout << "#################### Phonebook ####################\n";
    cout << "#                                                 #\n";
    cout << "#     ADD - Add a new contact.                    #\n";
    cout << "#     SEARCH - Display contact info.              #\n";
    cout << "#     EXIT - Exit phonebook.                      #\n";
    cout << "#                                                 #\n";
    cout << "###################################################\n";
}

string PhoneBook::getCommand()
{
    string command;
    cout << "Enter a command: ";
    getline(cin, command);
    return command;
}