#ifndef ENTIDADES_HPP
#define ENTIDADES_HPP

#include "dominios.hpp"

class Account {
private:
    Email email;
    Text name;
    Password password;

public:
    void setEmail(const Email&);
    void setName(const Text&);
    void setPassword(const Password&);

    std::string getEmail() const;
    std::string getName() const;
    std::string getPassword() const;

};

#endif // ENTIDADES_HPP