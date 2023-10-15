#include <iostream>
#include "dominios.hpp"
#include <stdexcept>

const int Email::NAME_LIMIT_MAX = 10;
const int Email::NAME_LIMIT_MIN = 2;
const int Email::DOMAIN_LIMIT_MAX = 20;
const int Email::DOMAIN_LIMIT_MIN = 2;

inline std::string Email::getEmail() const {
    return user_email;
}

std::pair<std::string, std::string> Email::splitEmail(const std::string&email) {
    size_t pos = email.find('@');
    std::string name = email.substr(0, pos);
    std::string domain = email.substr(pos + 1);

    return std::make_pair(name, domain); 
}

void Email::validateEmail(const std::string& email) {
    std::pair<std::string, std::string> email_splitted = splitEmail(email);
    std::string name   = email_splitted.first;
    std::string domain = email_splitted.second;
    if (name.size() > NAME_LIMIT_MAX || domain.size() > DOMAIN_LIMIT_MAX) {
        throw std::invalid_argument("EMAIL MUITO LONGO");
    }
    if (name.size() < NAME_LIMIT_MIN || domain.size() < DOMAIN_LIMIT_MIN)
        throw std::invalid_argument("EMAIL MUITO CURTO");
}