#ifndef PHONEBOOK_HPP
#define PHONEBOOK_HPP

#include "Contact.hpp"


class Phonebook
{
private:
    Contact _contacts[8];
    int _last_set_index;

public:
    Phonebook();
    ~Phonebook();

    void addContact(const Contact& new_contact);
    void displayContacts_as_table() const;
    void disspalyContact(int index) const;
};

#endif
