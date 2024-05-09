#include "utils_phonebook.hpp"

namespace utils_phonebook
{
    bool isNonEmptyString(const std::string& str)
    {
        size_t len = str.length();
        
        if (len == 0)
            return false;
        
        for (size_t i = 0; i < len; ++i) {
            if (!std::isspace(static_cast<unsigned char>(str[i])))
                return true;
        }
        
        return false;
    }
}