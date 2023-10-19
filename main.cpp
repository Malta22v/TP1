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

std::vector<int> listLimit = {
    5, 10, 15, 20, 2, 3, 6, 11, 14
};

std::vector<std::string> listCode= {
    "DD92", "CE23", "DO86", "Dx23", "DBd2", "Gh2L"
};

TUAccount Account1("joao@gmail.com", "Joao Victor", "3;bEd");
TUAccount Account2("marcos@gmail.com", "Marcos", "3Ee;2");



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

    for (const auto& limit : listLimit) {
        testLimit testeD(limit);

        switch(testeD.run()){
            case testLimit::SUCESSO: std::cout << "SUCESSO - LIMITE: " << testeD.getLimitTested() << std::endl;
                                    break;
            case testLimit::FALHA  : std::cout << "FALHA   - LIMITE: " << testeD.getLimitTested() << std::endl;
                                    break;
        }

    }

    std::cout << "\n";

    for (const auto& code : listCode) {
        testCode testeE(code);

        switch(testeE.run()){
            case testCode::SUCESSO: std::cout << "SUCESSO - SENHA: " << testeE.getCodeTested() << std::endl;
                                    break;
            case testCode::FALHA  : std::cout << "FALHA   - SENHA: " << testeE.getCodeTested() << std::endl;
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
