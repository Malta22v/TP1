#include <iostream>
#include "dominios.hpp"
#include <stdexcept>
#include <cctype>

const int Email::NAME_LIMIT_MAX = 10;
const int Email::NAME_LIMIT_MIN = 2;
const int Email::DOMAIN_LIMIT_MAX = 20;
const int Email::DOMAIN_LIMIT_MIN = 2;


std::pair<std::string, std::string> Email::splitEmail(const std::string& email) {
    size_t pos = email.find('@');
    std::string name = email.substr(0, pos);
    std::string domain = email.substr(pos + 1);

    return std::make_pair(name, domain); 
}

bool Email::hasInvalidCharacter(const std::string& word) {
    std::string alphabet_lowercase;
    std::string alphabet_highercase;
    std::string numbers = "01234567890";

    for (char c = 'a'; c <= 'z'; c++){
        alphabet_lowercase += c;
        alphabet_highercase += std::toupper(c);
    }

    std::string valid_chars = alphabet_lowercase + alphabet_highercase + numbers + '.';

    for (auto& c : word) {
        if(valid_chars.find(c) == std::string::npos) return true;
    }
    return false;
}

bool Email::hasDuplicatedDots(const std::string& word) {
    for (size_t i = 1; i < word.size(); i++) {
        if (word[i - 1] == '.' && word[i] == '.') return true;
    }
    return false;
}

void Email::validateEmail(const std::string& email) {
    std::pair<std::string, std::string> email_splitted = splitEmail(email);
    std::string name   = email_splitted.first;
    std::string domain = email_splitted.second;
    if (name.size() > NAME_LIMIT_MAX || domain.size() > DOMAIN_LIMIT_MAX) 
        throw std::invalid_argument("EMAIL MUITO LONGO");

    if (name.size() < NAME_LIMIT_MIN || domain.size() < DOMAIN_LIMIT_MIN)
        throw std::invalid_argument("EMAIL MUITO CURTO");

    if (hasInvalidCharacter(name) || hasInvalidCharacter(domain))
        throw std::invalid_argument("EMAIL TEM CARACTER INVALIDO");

    if (name[name.size() - 1] == '.' || domain[0] == '.')
        throw std::invalid_argument("EMAIL TEM PONTO ANTES OU DEPOIS DO @");

    if (hasDuplicatedDots(name) || hasDuplicatedDots(domain)) 
        throw std::invalid_argument("EMAIL TEM DOIS PONTOS SEGUIDOS");
}

void Email::setEmail(const std::string& emailInput) {
    validateEmail(emailInput);
    this->user_email = emailInput;
}