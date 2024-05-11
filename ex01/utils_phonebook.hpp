#ifndef UTILS_PHONEBOOK_H
#define UTILS_PHONEBOOK_H

#include <string>
#include <cctype>
#include <iostream>
#include <iomanip>

namespace utils_phonebook 
{
    bool isNonEmptyString(const std::string& str);
    void printStringNoEndl_10_chars(const std::string& my_string);
    bool isStringNumeric(const std::string& str);
}
#endif
