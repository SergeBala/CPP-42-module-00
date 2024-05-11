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

    void printStringNoEndl_10_chars(const std::string& my_string) 
    {
        if (my_string.size() < 11)
        {
            std::cout << std::setw(10) << std::right << my_string;
        }    
        else
        {
            std::cout << my_string.substr(0, 9) << ".";
        }
    
    }
}
