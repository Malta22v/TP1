 /**
     * @file dominios.hpp
     * 
     * @brief Declaração das classes da biblioteca de Domínios
     */

#ifndef DOMINIOS_HPP  
#define DOMINIOS_HPP

#include <stdexcept>
#include <string>
#include <utility>

//Declaração da classe que representa o e-mail

class Email {
    private:
        static const int NAME_LIMIT_MAX; // Máximo de caracteres permitido no nome
        static const int NAME_LIMIT_MIN; // Mínimo de caracteres permitido no nome
        static const int DOMAIN_LIMIT_MAX; // Limite máximo do domínio 
        static const int DOMAIN_LIMIT_MIN; // Limite mínio do domínio
        std::string user_email; // E-mail por escrito 
        std::pair<std::string, std::string> splitEmail(const std::string&); 
        bool hasInvalidCharacter(const std::string&); 
        bool hasDuplicatedDots(const std::string&);
        void validateEmail(const std::string&);

    public:
/**
     * @brief Atualiza o e-mail
     */
        void setValue(const std::string&);
        std::string getValue() const;
};
/**
     * @return E-mail
     */
inline std::string Email::getValue() const {
    return user_email;
}
// Declaração da classe que representa a senha do e-mail
class Password {
    private:
        static const int PASSWORD_LENGHT; // constante que armazena o tamanho da senha
        static const std::string VALID_CHARACTERS; // constante que armazena os caracteres válidos
        std::string user_password; // 
        bool isThereThisTypeChar(const std::string&, const std::string&);
        bool isThereRepetitiveChar(const std::string&);
        void validatePassword(const std::string&);
    public:
        void setValue(const std::string&);
        std::string getValue() const;
};
/**
     * @return Senha
     */
inline std::string Password::getValue() const {
    return user_password;
}
// Declaração da classe que representa o texto
class Text {
    private:
        static const int TEXT_LIMIT_MAX; // constante que armazena o limite máximo do texto
        static const int TEXT_LIMIT_MIN; // constante que armazena o valor mínimo do texto
        std::string user_text; // representação do texto do usuário
        bool hasInvalidChar(const std::string&, const std::string&);
        bool hasConsecultivesSpaces(const std::string&);
        bool hasConsecutivePunctuations(const std::string&);
        bool isFirstCharUpper(const std::string&);
        bool isFirstCharAfterPunctuationUpper(const std::string&);
        void validateText(const std::string&);
    public:

        void setValue(const std::string&);
        std::string getValue() const;
};
/**
     * @return Texto do usuário
     */
inline std::string Text::getValue() const {
    return user_text;
}
//Definição da classe que representa o limite 
class Limit{
    private:
        int user_limit;                      // Atributo para armazenar valor.
        void validateLimit(const int);              // Método para validar valor.
    public:
        void setValue(const int);             // Método para atribuir valor.
        int getValue() const;          // Método para recuperar valor.
};
/**
     * @return Limite
     */
inline int Limit::getValue() const {
    return user_limit;
}

// Definição da classe que reprenseta o código
class Code {
    private:
        static const int CODE_SIZE; // constante que armazena o tamanho do código
        std::string user_code; // representação do código
        void validateCode(const std::string&);
    public:
        void setValue(const std::string&);
        std::string getValue() const;
};
/**
     * @return Código
     */
inline std::string Code::getValue() const {
    return user_code;
}
// Declaração da classe que representa coluna
class Column {
    private:
        std::string user_column; // representação da coluna
        void validateColumn(const std::string&);
    public:
        void setValue(const std::string&);
        std::string getValue() const;
};
/**
     * @return Coluna
     */
inline std::string Column::getValue() const {
    return user_column;
}

#endif
