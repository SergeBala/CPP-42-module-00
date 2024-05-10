
#include "Contact.hpp"
#include <iostream>
#include <string>
#include <cctype>
#include "utils_phonebook.hpp"

// Constructor
Contact::Contact()
{
    _first_name = "";
    _last_name = "";
    _nickname = "";
    _phone_number = "";
    _darkest_secret = "";
    _is_there_info_flag = 0;
    std :: cout << "Contact object created" << std :: endl;
}

// Destructor
Contact::~Contact()
{
    std :: cout << "Contact object destroyed" << std :: endl;
}

//Copy constructor
Contact::Contact(const Contact& other)
{
    _first_name = other._first_name;
    _last_name = other._last_name;
    _nickname = other._nickname;
    _phone_number = other._phone_number;
    _darkest_secret = other._darkest_secret;
}

// Assignment operator
Contact& Contact::operator=(const Contact& other)
{
    if (this != &other)
    {
        _first_name = other._first_name;
        _last_name = other._last_name;
        _nickname = other._nickname;
        _phone_number = other._phone_number;
        _darkest_secret = other._darkest_secret;
    }
    return *this;
}

// Getter methods
std::string Contact::getFirstName() const
{
    return _first_name;
}

std::string Contact::getLastName() const 
{
    return _last_name;
}

std::string Contact::getNickname() const
{
    return _nickname;
}

std::string Contact::getPhoneNumber() const
{
    return _phone_number;
}

std::string Contact::getDarkestSecret() const
{
    return _darkest_secret;
}

int Contact::getIsThereInfoFlag() const
{
    return _is_there_info_flag;
}

// Setter methods
void Contact::setFirstName(const std::string& first_name)
{
    _first_name = first_name;
    if (!utils_phonebook::isNonEmptyString(first_name))
        _is_there_info_flag = 1;
}

void Contact::setLastName(const std::string& last_name) {
    _last_name = last_name;
    if (!utils_phonebook::isNonEmptyString(last_name))
        _is_there_info_flag = 1;
}

void Contact::setNickname(const std::string& nickname)
{
    _nickname = nickname;
    if (!utils_phonebook::isNonEmptyString(nickname))
        _is_there_info_flag = 1;
}

void Contact::setPhoneNumber(const std::string& phone_number)
{
    _phone_number = phone_number;
    if (!utils_phonebook::isNonEmptyString(phone_number))
        _is_there_info_flag = 1;
}

void Contact::setDarkestSecret(const std::string& darkest_secret) {
    _darkest_secret = darkest_secret;
    if (!utils_phonebook::isNonEmptyString(darkest_secret))
        _is_there_info_flag = 1;
}

void Contact::resetFields()
{
    _first_name = "";
    _last_name = "";
    _nickname = "";
    _phone_number = "";
    _darkest_secret = "";
    _is_there_info_flag = 0;
}

void Contact::setFieldsFromUserInput()
{
    std::string first_name;
    std::string last_name;
    std::string nickname;
    std::string phone_number;
    std::string darkest_secret;

    std::cout << "Enter first name: ";
    std::cin >> first_name;
    if (!utils_phonebook::isNonEmptyString(first_name))
    {
        first_name = "Unknown";
    }
    else
        _is_there_info_flag = 1;
    setFirstName(first_name);

    std::cout << "Enter last name: ";
    std::cin >> last_name;
    if (!utils_phonebook::isNonEmptyString(last_name))
    {
        last_name = "Unknown";
    }
    else
        _is_there_info_flag = 1;
    setLastName(last_name);

    std::cout << "Enter nickname: ";
    std::cin >> nickname;
    if (!utils_phonebook::isNonEmptyString(nickname))
    {
        nickname = "Unknown";
    }
    else
        _is_there_info_flag = 1;
    setNickname(nickname);

    std::cout << "Enter phone number: ";
    std::cin >> phone_number;
    if (!utils_phonebook::isNonEmptyString(phone_number))
    {
        phone_number = "Unknown";
    }
    else
        _is_there_info_flag = 1;
    setPhoneNumber(phone_number);

    std::cout << "Enter darkest secret: ";
    std::cin >> darkest_secret;
    if (!utils_phonebook::isNonEmptyString(darkest_secret))
    {
        darkest_secret = "Unknown";
    }
    else
        _is_there_info_flag = 1;
    setDarkestSecret(darkest_secret);

    if (_is_there_info_flag == 0)
    {
        std::cout << "A contact has to have at least some info!" << std::endl;
        resetFields();
        setFieldsFromUserInput();
    }
}

void Contact::printContactLineByLine() const
{
    std::cout << "First name: " << _first_name << std::endl;
    std::cout << "Last name: " << _last_name << std::endl;
    std::cout << "Nickname: " << _nickname << std::endl;
    std::cout << "Phone number" << _phone_number << std::endl;
    std::cout << "Darkest secret: " << _darkest_secret << std::endl;
}

void Contact::printContactAsTable() const
{
    std::cout << "|";
    utils_phonebook::printStringNoEndl_10_chars(_first_name);
    std::cout << "|";
    utils_phonebook::printStringNoEndl_10_chars(_last_name);
    std::cout << "|";
    utils_phonebook::printStringNoEndl_10_chars(_nickname);
    std::cout << std::endl;

}
