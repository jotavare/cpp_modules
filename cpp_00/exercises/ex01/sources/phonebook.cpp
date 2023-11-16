#include "../includes/phonebook.hpp"

PhoneBook::PhoneBook() : numContacts(0) {}

void PhoneBook::addContact()
{
    if (numContacts == maxContacts)
    {
        for (int i = 0; i < maxContacts - 1; ++i)
            contacts[i] = contacts[i + 1];
        --numContacts;
    }

    Contact newContact;
    cout << "First name: ";
    cin >> newContact.firstName;
    cout << "Last name: ";
    cin >> newContact.lastName;
    cout << "Nickname: ";
    cin >> newContact.nickname;
    cout << "Phone number: ";
    cin >> newContact.phoneNumber;
    cout << "Darkest secret: ";
    cin >> newContact.darkestSecret;

    contacts[numContacts++] = newContact;
    cout << "Contact added successfully!✅\n";
}

void PhoneBook::searchContact()
{
    if (numContacts == 0)
    {
        cout << "Phonebook is empty.\n";
        return;
    }

    cout
        << setw(10) << "       Index "
        << setw(10) << "| First Name "
        << setw(10) << "|  Last Name "
        << setw(10) << "|   Nickname " << endl;

    for (int i = 0; i < numContacts; ++i)
    {
        cout
            << setw(12) << i
            << " | " << setw(10) << truncateString(contacts[i].firstName)
            << " | " << setw(10) << truncateString(contacts[i].lastName)
            << " | " << setw(10) << truncateString(contacts[i].nickname) << endl;
    }

    int index;
    cout << "Enter the index of the contact to display: ";
    cin >> index;

    if (index >= 1 && index <= numContacts - 1)
        displayContact(contacts[index]);
    else
        cout << "Invalid index. Insert an index between 0-" << numContacts - 1 << "." << endl;
}

void PhoneBook::displayContact(const Contact &contact)
{
    cout << "First name: " << contact.firstName << endl;
    cout << "Last name: " << contact.lastName << endl;
    cout << "Nickname: " << contact.nickname << endl;
    cout << "Phone number: " << contact.phoneNumber << endl;
    cout << "Darkest secret: " << contact.darkestSecret << endl;
}
