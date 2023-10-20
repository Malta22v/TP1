 /**
     * @file entidades.cpp
     * 
     * @brief Definições das funções que fazem parte da biblioteca de Entidades 
     */


#include "entidades.hpp"
#include "dominios.hpp"
 /**
     * @brief Atualiza o e-mail
     * 
     * @return Novo e-mail 
     */
void Account::setEmail(const Email& email) {
    this->email = email;
}
 /**
     * @brief Atualiza o nome
     * 
     * @return Novo nome 
     */
void Account::setName(const Text& name) {
    this->name = name;
}
 /**
     * @brief Atualiza a senha
     * 
     * @return Nova senha 
     */
void Account::setPassword(const Password& password) {
    this->password = password;
}
 /**
     * @return E-mail
     */
std::string Account::getEmail() const {
    return email.getValue(); 
}
 /**
     * @return Nome 
     */
std::string Account::getName() const {
    return name.getValue(); 
}
 /**
     * @return Senha 
     */
std::string Account::getPassword() const {
    return password.getValue();  
}
 /**
     * @brief Atualiza o valor do código
     * 
     * @return Código 
     */
void Board::setCode(const Code& code) {
    this->code = code;
}
 /**
     * @brief Atualiza o nome
     * 
     * @return Novo nome 
     */
void Board::setName(const Text& name) {
    this->name = name;
}
 /**
     * @brief Atualiza a descrição
     * 
     * @return Nova descrição
     */
void Board::setDescription(const Text& description) {
    this->description = description;
}
 /**
     * @brief Atualiza o valor do limite
     * 
     * @return Novo limite 
     */
void Board::setLimit(const Limit& limit) {
    this->limit = limit;
}
 /**
     * @return Código 
     */
std::string Board::getCode() const {
    return code.getValue(); 
}
 /**
     * @return Nome
     */
std::string Board::getName() const {
    return name.getValue(); 
}
 /**
    * @return Descrição 
     */
std::string Board::getDescription() const {
    return description.getValue(); 
}
 /**
     * @return Limite 
     */
int Board::getLimit() const {
    return limit.getValue(); 
}

