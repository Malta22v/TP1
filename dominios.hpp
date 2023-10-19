#ifndef DOMINIOS_HPP  
#define DOMINIOS_HPP

#include <stdexcept>
#include <string>
#include <utility>


class Email {
    private:
        static const int NAME_LIMIT_MAX;
        static const int NAME_LIMIT_MIN;
        static const int DOMAIN_LIMIT_MAX;
        static const int DOMAIN_LIMIT_MIN;
        std::string user_email;
        std::pair<std::string, std::string> splitEmail(const std::string&);
        bool hasInvalidCharacter(const std::string&);
        bool hasDuplicatedDots(const std::string&);
        void validateEmail(const std::string&);

    public:
        void setValue(const std::string&);
        std::string getValue() const;
};

inline std::string Email::getValue() const {
    return user_email;
}

class Password {
    private:
        static const int PASSWORD_LENGHT;
        static const std::string VALID_CHARACTERS;
        std::string user_password;
        bool isThereThisTypeChar(const std::string&, const std::string&);
        bool isThereRepetitiveChar(const std::string&);
        void validatePassword(const std::string&);
    public:
        void setValue(const std::string&);
        std::string getValue() const;
};
inline std::string Password::getValue() const {
    return user_password;
}

class Text {
    private:
        static const int TEXT_LIMIT_MAX;
        static const int TEXT_LIMIT_MIN;
        std::string user_text;
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

inline std::string Text::getValue() const {
    return user_text;
}
#endif