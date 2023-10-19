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