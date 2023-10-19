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

class Board {
private:
    Code code;
    Text name;    
    Text description;    
    Limit limit;

public:
    void setCode(const Code&);
    void setName(const Text&);
    void setDescription(const Text&);
    void setLimit(const Limit&);

    std::string getCode() const;
    std::string getName() const;
    std::string getDescription() const;
    int getLimit() const;

};

#endif // ENTIDADES_HPP