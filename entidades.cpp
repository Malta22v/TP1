#include "entidades.hpp"
#include "dominios.hpp"

void Account::setEmail(const Email& email) {
    this->email = email;
}

void Account::setName(const Text& name) {
    this->name = name;
}

void Account::setPassword(const Password& password) {
    this->password = password;
}

std::string Account::getEmail() const {
    return email.getValue(); 
}

std::string Account::getName() const {
    return name.getValue(); 
}

std::string Account::getPassword() const {
    return password.getValue();  
}

void Board::setCode(const Code& code) {
    this->code = code;
}

void Board::setName(const Text& name) {
    this->name = name;
}

void Board::setDescription(const Text& description) {
    this->description = description;
}

void Board::setLimit(const Limit& limit) {
    this->limit = limit;
}

std::string Board::getCode() const {
    return code.getValue(); 
}

std::string Board::getName() const {
    return name.getValue(); 
}

std::string Board::getDescription() const {
    return description.getValue(); 
}

int Board::getLimit() const {
    return limit.getValue(); 
}

