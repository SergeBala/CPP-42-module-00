
#include "contact.hpp"

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
    _is_there_info_flag = other._is_there_info_flag;
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
        _is_there_info_flag = other._is_there_info_flag;
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

void Contact::check_if_empty_string_and_set_flag(std::string& str)
{
    if (!utils_phonebook::isNonEmptyString(str))
        str = "Unknown";
    else
        _is_there_info_flag = 1;
}

void Contact::setFieldsFromUserInput()
{
    std::string first_name;
    std::string last_name;
    std::string nickname;
    std::string phone_number;
    std::string darkest_secret;

    std::cout << "Enter first name: ";
    std::getline(std::cin, first_name);
    check_if_empty_string_and_set_flag(first_name);
    setFirstName(first_name);

    std::cout << "Enter last name: ";
    std::getline(std::cin, last_name);
    check_if_empty_string_and_set_flag(last_name);
    setLastName(last_name);

    std::cout << "Enter nickname: ";
    std::getline(std::cin, nickname);
    check_if_empty_string_and_set_flag(nickname);
    setNickname(nickname);

    std::cout << "Enter phone number (digits only): ";
    std::getline(std::cin, phone_number);
    check_if_empty_string_and_set_flag(phone_number);
    while (!utils_phonebook::isStringNumeric(phone_number))
    {
        std::cout << "Phone number must contain only digits, re-enter phone number:";
        std::getline(std::cin, phone_number);
    }
    setPhoneNumber(phone_number);

    std::cout << "Enter darkest secret: ";
    std::getline(std::cin, darkest_secret);
    check_if_empty_string_and_set_flag(darkest_secret);
    setDarkestSecret(darkest_secret);

    if (_is_there_info_flag == 0)
    {
        std::cout << "A contact must have at least 1 non-empty field, let's try again: " << std::endl;
        resetFields();
        setFieldsFromUserInput();
    }
    else
    {
        std::cout << "------------------------------------------------------" << std::endl;
        std::cout << "New contact added ";
    }
    // printContactLineByLine();
    // printContactAsTable();
}

void Contact::printContactLineByLine() const
{
    std::cout << "First name: " << _first_name << std::endl;
    std::cout << "Last name: " << _last_name << std::endl;
    std::cout << "Nickname: " << _nickname << std::endl;
    std::cout << "Phone number: " << _phone_number << std::endl;
    std::cout << "Darkest secret: " << _darkest_secret << std::endl;
    //std::cout << "is_there_info_flag: " << _is_there_info_flag << std::endl;
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
