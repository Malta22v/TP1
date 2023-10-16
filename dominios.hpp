#ifndef DOMINIOS_HPP  
#define DOMINIOS_HPP

#include <stdexcept>
#include <string>
#include <utility>


class Email {
    private:
        static const int NAME_LIMIT_MAX;
        static const int NAME_LIMIT_MIN;
        static const int DOMAIN_LIMIT_MAX;
        static const int DOMAIN_LIMIT_MIN;
        std::string user_email;
        std::pair<std::string, std::string> splitEmail(const std::string&);
        bool hasInvalidCharacter(const std::string&);
        bool hasDuplicatedDots(const std::string&);
    public:

        Email(std::string email) : user_email(email) {}
        void validateEmail(const std::string&);
        void setEmail(const std::string&);
        std::string getEmail() const;
};

#endif