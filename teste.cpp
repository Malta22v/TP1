#include "dominios.hpp"
#include "teste.hpp"
#include <stdexcept>
#include <string>
#include <iostream>


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


void testPassword::setUp(){
    password = new Password();
    estado = SUCESSO;
}

void testPassword::tearDown(){
    delete password;
}

void testPassword::testSettings(){
    try{
        password->setPassword(user_password);
    } catch (const std::invalid_argument& e) {
        // std::cout << e.what() << " ";
        estado = FALHA;
    }
}

int testPassword::run(){
    setUp();
    testSettings();
    tearDown();
    return estado;
}
