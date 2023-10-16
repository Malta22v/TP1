#include "dominios.hpp"
#include "teste.hpp"
#include <stdexcept>
#include <string>


void testEmail::setUp(){
    email = new Email();
    estado = SUCESSO;
}

void testEmail::tearDown(){
    delete email;
}

void testEmail::testSettings(){
    try{
        email->setEmail(user_email);
    } catch (const std::invalid_argument& e) {
        estado = FALHA;
    }
}

int testEmail::run(){
    setUp();
    testSettings();
    tearDown();
    return estado;
}
