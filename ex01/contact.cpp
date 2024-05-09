
#include "Contact.hpp"
#include <iostream>
#include <string>
#include <cctype>
#include "utils_phonebook.hpp"

// Constructor
Contact::Contact()
{
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

// Setter methods
void Contact::setFirstName(const std::string& first_name)
{
    _first_name = first_name;
}

void Contact::setLastName(const std::string& last_name) {
    _last_name = last_name;
}

void Contact::setNickname(const std::string& nickname)
{
    _nickname = nickname;
}

void Contact::setPhoneNumber(const std::string& phone_number)
{
    _phone_number = phone_number;
}

void Contact::setDarkestSecret(const std::string& darkest_secret) {
    _darkest_secret = darkest_secret;
}

void Contact::setFieldsFromUserInput()
{
    std::string first_name;
    std::string last_name;
    std::string nickname;
    std::string phone_number;
    std::string darkest_secret;
    int         is_there_info_flag = 0;

    std::cout << "Enter first name: ";
    std::cin >> first_name;
    if (!utils_phonebook::isNonEmptyString(first_name))
    {
        first_name = "Unknown";
    }
    else
        is_there_info_flag = 1;
    setFirstName(first_name);

    std::cout << "Enter last name: ";
    std::cin >> last_name;
    if (!utils_phonebook::isNonEmptyString(last_name))
    {
        last_name = "Unknown";
    }
    else
        is_there_info_flag = 1;
    setLastName(last_name);

    std::cout << "Enter nickname: ";
    std::cin >> nickname;
    if (!utils_phonebook::isNonEmptyString(nickname))
    {
        nickname = "Unknown";
    }
    else
        is_there_info_flag = 1;
    setNickname(nickname);

    std::cout << "Enter phone number: ";
    std::cin >> phone_number;
    if (!utils_phonebook::isNonEmptyString(phone_number))
    {
        phone_number = "Unknown";
    }
    else
        is_there_info_flag = 1;
    setPhoneNumber(phone_number);

    std::cout << "Enter darkest secret: ";
    std::cin >> darkest_secret;
    if (!utils_phonebook::isNonEmptyString(darkest_secret))
    {
        darkest_secret = "Unknown";
    }
    else
        is_there_info_flag = 1;
    setDarkestSecret(darkest_secret);

    if (is_there_info_flag == 0)
    {
        std::cout << "A contact has to have at least some info!" << std::endl;
        setFieldsFromUserInput();
    }
}
