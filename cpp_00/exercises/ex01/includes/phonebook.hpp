#ifndef PHONEBOOK_HPP
#define PHONEBOOK_HPP

#include "contact.hpp"

using namespace std;

class PhoneBook
{
public:
    PhoneBook();
    ~PhoneBook(){};

    void addContact();
    void searchContact();
    void printMessage();
    string getCommand();

private:
    static const int maxContacts = 8;
    Contact contacts[maxContacts];
    int numContacts;

    string truncateString(const string &str);
    void displayContact(const Contact &contact);
};

#endif
