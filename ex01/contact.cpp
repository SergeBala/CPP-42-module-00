
#include "Contact.hpp"
#include <iostream>

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
