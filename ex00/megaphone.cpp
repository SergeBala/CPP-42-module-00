#include <cctype>
#include <iostream>
#include <string>

int main(int argc, char **argv)
{
    if (argc == 1) 
    {
        std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *" << std::endl;
        return (0);
    } 
    else 
    {
        for (int i = 1; i < argc; i++)
        {
            std::string arg = argv[i];
            int len = arg.length();
            for (int i = 0; i < len; i++)
            {
                arg[i] = toupper(arg[i]);
            }
            std::cout << arg << " ";
        }
    }
    std::cout << std::endl;
    return (0);
}