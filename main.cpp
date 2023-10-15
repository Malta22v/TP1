#include <iostream>
#include "teste.hpp"
#include "dominios.hpp"
#include <vector>

std::vector<std::string> listEmails = {
    "email_teste@gmail.com", "batata@gmail.com"
    };

int main() {

    for (const auto& email : listEmails) {
        testEmail testeA(email);

        switch(testeA.run()){
            case testEmail::SUCESSO: std::cout << "SUCESSO - EMAIL: " << testeA.getEmail() << std::endl;
                                    break;
            case testEmail::FALHA  : std::cout << "FALHA   - EMAIL: " << testeA.getEmail() << std::endl;
                                    break;
        }

    }
    return 0;
}
