#include "phonebook.hpp"
#include <sstream>

int main()
{
    Phonebook phonebook;
    Contact contact_for_input;

    while (1)
    {
        std::string command;
        std::cout << "Enter a command (ADD to add contact, SEARCH to look up a contact, EXIT to exit): ";
        std::getline(std::cin, command);
        if (command == "EXIT")
        {
            std::cout << "Phonebook has just been deleted." << std::endl << "Bye!" << std::endl;
            break;
        }
        else if (command == "ADD")
        {
            contact_for_input.setFieldsFromUserInput();
            phonebook.addContact(contact_for_input);
            contact_for_input.resetFields();
        }
        else if (command == "SEARCH")
        {
            phonebook.displayContacts_as_table();
            std::string index;
            std::cout << "Enter the index of the contact you want to display: ";
            std::getline(std::cin, index);
            phonebook.disspalyContact(index);
        }
        else
        {
            std::cout << "Invalid command" << std::endl;
        }
    }    
    return(0);
}
