#include <iostream>
#include "dominios.hpp"
#include <stdexcept>
#include <cctype>


struct ValidCharacters {
    std::string lowercase;
    std::string highercase;
    std::string numbers;
    std::string commas;
};

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
    std::string errors;
    std::pair<std::string, std::string> email_splitted = splitEmail(email);
    std::string name   = email_splitted.first;
    std::string domain = email_splitted.second;
    if (name.size() > NAME_LIMIT_MAX || domain.size() > DOMAIN_LIMIT_MAX) 
        errors += "EMAIL MUITO LONGO\n";

    if (name.size() < NAME_LIMIT_MIN || domain.size() < DOMAIN_LIMIT_MIN)
        errors += "EMAIL MUITO CURTO\n";

    if (hasInvalidCharacter(name) || hasInvalidCharacter(domain))
        errors += "EMAIL TEM CARACTER INVALIDO\n";

    if (name[name.size() - 1] == '.' || domain[0] == '.')
        errors += "EMAIL TEM PONTO ANTES OU DEPOIS DO @\n";

    if (hasDuplicatedDots(name) || hasDuplicatedDots(domain)) 
        errors += "EMAIL TEM DOIS PONTOS SEGUIDOSO\n";

    if (!errors.empty()) {
        throw std::invalid_argument(errors);
    }
}

void Email::setEmail(const std::string& emailInput) {
    validateEmail(emailInput);
    this->user_email = emailInput;
}

const int Password::PASSWORD_LENGHT = 5;

bool Password::isThereThisTypeChar(const std::string& word, const std::string& typeChar){
    for (auto& c : word) {
        if (typeChar.find(c) != std::string::npos) return true;
    }
    return false;
}

bool Password::isThereRepetitiveChar(const std::string& password){
    for (size_t i = 0; i < password.size() - 1; i++) {
        for (size_t j = i + 1; j < password.size(); j++) {
            if (password[i] == password[j]) return true;
        }
    }
    return false;
}

void Password::validatePassword(const std::string& password){
    std::string errors;
    ValidCharacters validChar;
    validChar.lowercase = "abcdefghijklmnopqrstuvwxyz";
    validChar.highercase = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";
    validChar.numbers = "0123456789";
    validChar.commas = ".,;?!";

    if (password.size() != PASSWORD_LENGHT) 
        errors += "SENHA NAO TEM 5 CARACTERES\n";
    
    if (!(isThereThisTypeChar(password, validChar.lowercase))) 
        errors += "SENHA NAO HA LETRA MINUSCULA\n";

    if (!(isThereThisTypeChar(password, validChar.highercase)))
        errors += "SENHA NAO HA LETRA MAIUSCULA\n";
    
    if (!(isThereThisTypeChar(password, validChar.numbers))) 
        errors += "SENHA NAO HA NUMEROS\n";
    
    if (!(isThereThisTypeChar(password, validChar.commas))) 
        errors += "SENHA NAO HA PONTOS\n";

    if (isThereRepetitiveChar(password))
        errors += "SENHA HA CARACTERES REPETITIVOS\n";

    if (!errors.empty()) {
        throw std::invalid_argument(errors);
    }
}

void Password::setPassword(const std::string& passwordInput) {
    validatePassword(passwordInput);
    this->user_password = passwordInput;
}