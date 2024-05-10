#include<phonebook.hpp>
#include<iostream>

Phonebook::Phonebook()
{
    _last_set_index = -1;
    std::cout << "Phonebook object created" << std::endl;
}

Phonebook::~Phonebook()
{
    std::cout << "Phonebook object destroyed" << std::endl;
}

void Phonebook::addContact(const Contact& new_contact)
{
    int oldest_contact_index = -1;

    if (_last_set_index == -1)
        oldest_contact_index = 0;
    else
        oldest_contact_index = (_last_set_index + 1) % 8;
    _contacts[oldest_contact_index] = new_contact;
    _last_set_index = oldest_contact_index;
}

// void Phonebook::displayContacts() const
// {//add logic to display only 10 characters of first name, last name and nickname
//     std::cout << "Index     |First Name|Last Name |Nickname  " << std::endl;
//     for (int i = 0; i <= _last_set_index; ++i)
//     {

//     }
// }