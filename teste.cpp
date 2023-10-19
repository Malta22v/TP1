#include "dominios.hpp"
#include "teste.hpp"
#include "entidades.hpp"
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
        email->setValue(user_email);
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
        password->setValue(user_password);
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

void testText::setUp(){
    text = new Text();
    estado = SUCESSO;
}

void testText::tearDown(){
    delete text;
}

void testText::testSettings(){
    try{
        text->setValue(user_text);
    } catch (const std::invalid_argument& e) {
        // std::cout << e.what() << " ";
        estado = FALHA;
    }
}

int testText::run(){
    setUp();
    testSettings();
    tearDown();
    return estado;
}

void testLimit::setUp(){
    limit = new Limit();
    estado = SUCESSO;
}

void testLimit::tearDown(){
    delete limit;
}

void testLimit::testSettings(){
    try{
        limit->setValue(user_limit);
    } catch (const std::invalid_argument& e) {
        // std::cout << e.what() << " ";
        estado = FALHA;
    }
}

int testLimit::run(){
    setUp();
    testSettings();
    tearDown();
    return estado;
}

void testCode::setUp(){
    code = new Code();
    estado = SUCESSO;
}

void testCode::tearDown(){
    delete code;
}

void testCode::testSettings(){
    try{
        code->setValue(user_code);
    } catch (const std::invalid_argument& e) {
        // std::cout << e.what() << " ";
        estado = FALHA;
    }
}

int testColumn::run(){
    setUp();
    testSettings();
    tearDown();
    return estado;
}

void testColumn::setUp(){
    column = new Column();
    estado = SUCESSO;
}

void testColumn::tearDown(){
    delete column;
}

void testColumn::testSettings(){
    try{
        column->setValue(user_column);
    } catch (const std::invalid_argument& e) {
        // std::cout << e.what() << " ";
        estado = FALHA;
    }
}

int testCode::run(){
    setUp();
    testSettings();
    tearDown();
    return estado;
}


void TUAccount::setUp(){
    account = new Account();
    estado = SUCESSO;
}

void TUAccount::tearDown(){
    delete account;
}

void TUAccount::testSettings(){

    Email email;
    Text name;
    Password password;

    email.setValue(user_email);
    name.setValue(user_name);
    password.setValue(user_password);

    account->setEmail(email);
    account->setName(name);
    account->setPassword(password);

    if( account->getEmail() != user_email ||
        account->getName() != user_name ||
        account->getPassword() != user_password) {estado = FALHA;}
}

int TUAccount::run(){
    setUp();
    testSettings();
    tearDown();
    return estado;
}

