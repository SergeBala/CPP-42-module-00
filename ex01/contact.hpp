#ifndef contact_hpp

#define contact_hpp

#include <string>

class Contact
{
private:
    std::string _first_name;
    std::string _last_name;
    std::string _nickname;
    std::string _phone_number;
    std::string _darkest_secret;
    int         _is_there_info_flag;

public:
    // Constructor and Destructor
    Contact();
    ~Contact();

    // Copy constructor
    Contact::Contact(const Contact& other);

    // Getter methods
    std::string getFirstName() const;
    std::string getLastName() const;
    std::string getNickname() const;
    std::string getPhoneNumber() const;
    std::string getDarkestSecret() const;

    // Setter methods
    void setFirstName(const std::string& first_name);
    void setLastName(const std::string& last_name);
    void setNickname(const std::string& nickname);
    void setPhoneNumber(const std::string& phone_number);
    void setDarkestSecret(const std::string& darkest_secret);
    void resetFields();
    
    //user_input
    void setFieldsFromUserInput();

    //print methods
    void printContactLineByLine() const;
    void printContactAsTable() const;
};

#endif