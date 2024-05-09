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
};

#endif
