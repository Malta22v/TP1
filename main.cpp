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

std::vector<std::string> listText = {
    "Isso e um texto, legal", "Fazer classe entidade", "Refazer tudo! agora", 
    "novo card Kanbam", "Refatorar...", "Testar.codigo"
};

TUAccount Account1("joao@gmail.com", "Joao Victor", "3;bEd");
TUAccount Account2("marcos@gmail.com", "Marcos", "3Ee;2");
TUAccount Account3("elen.@gmail.com", "ELL$n", "Asj2ba");

std::vector<TUAccount> listAccounts = { Account1, Account2, Account3 };


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
            case testPassword::SUCESSO: std::cout << "SUCESSO - SENHA: " << testeB.getPasswordTested() << std::endl;
                                    break;
            case testPassword::FALHA  : std::cout << "FALHA   - SENHA: " << testeB.getPasswordTested() << std::endl;
                                    break;
        }

    }

    std::cout << "\n";

    for (const auto& text : listText) {
        testText testeC(text);

        switch(testeC.run()){
            case testText::SUCESSO: std::cout << "SUCESSO - TEXTO: " << testeC.getTextTested() << std::endl;
                                    break;
            case testText::FALHA  : std::cout << "FALHA   - TEXTO: " << testeC.getTextTested() << std::endl;
                                    break;
        }

    }

    std::cout << "\n";

    switch(Account1.run()){
        case TUAccount::SUCESSO: std::cout << "SUCESSO - CONTA: " << Account1.getAccountTested() << std::endl;
                                break;
        case TUAccount::FALHA  : std::cout << "FALHA   - CONTA" << std::endl;
                                break;
    }

    switch(Account2.run()){
        case TUAccount::SUCESSO: std::cout << "SUCESSO - CONTA: " << Account2.getAccountTested() << std::endl;
                                break;
        case TUAccount::FALHA  : std::cout << "FALHA   - CONTA" << std::endl;
                                break;
    }

    return 0;
}
