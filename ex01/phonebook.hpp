#ifndef PHONEBOOK_HPP
#define PHONEBOOK_HPP

#include "contact.hpp"


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
    void disspalyContact(const std::string& str_index) const;
};

#endif
