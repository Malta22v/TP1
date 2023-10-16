#include <iostream>
#include "teste.hpp"
#include "dominios.hpp"
#include <vector>

std::vector<std::string> listEmails = {
    "joao@unb.com.br", "email_teste@gmail.com", "batata@gmail.com", "que_ijo@quente.com", "batat.@oi.com",
    "o#tono@gmail.com", "isso..eUmEmail@email.com"
    };

std::vector<std::string> listPasswords = {
    "Asj2ba", "3Ee;2", "1.2Ee2", ";11Ed", "3;bEd", "3.2GE"
};

int main() {

    for (const auto& email : listEmails) {
        testEmail testeA(email);

        switch(testeA.run()){
            case testEmail::SUCESSO: std::cout << "SUCESSO - EMAIL: " << testeA.getEmailTested() << std::endl;
                                    break;
            case testEmail::FALHA  : std::cout << "FALHA   - EMAIL: " << testeA.getEmailTested() << std::endl;
                                    break;
        }

    }

    std::cout << "\n";

    for (const auto& password : listPasswords) {
        testPassword testeB(password);

        switch(testeB.run()){
            case testEmail::SUCESSO: std::cout << "SUCESSO - SENHA: " << testeB.getPasswordTested() << std::endl;
                                    break;
            case testEmail::FALHA  : std::cout << "FALHA   - SENHA: " << testeB.getPasswordTested() << std::endl;
                                    break;
        }

    }
    return 0;
}
