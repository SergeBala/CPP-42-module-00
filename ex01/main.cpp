#include "phonebook.hpp"

int main()
{
    Phonebook phonebook;
    Contact contact_for_input;

    while (1)
    {
        std::string command;
        std::cout << "Enter a command: ";
        std::cin >> command;
        if (command == "EXIT")
            break;
        else if (command == "ADD")
        {
            contact_for_input.setFieldsFromUserInput();
            phonebook.addContact(contact_for_input);
        }
        else if (command == "SEARCH")
        {
            phonebook.displayContacts_as_table();
            int index;
            std::cout << "Enter the index of the contact you want to display: ";
            std::cin >> index;
            phonebook.disspalyContact(index);
        }
    }    
    return(0);
}
