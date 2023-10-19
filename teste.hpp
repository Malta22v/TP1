#include "dominios.hpp"
#include "entidades.hpp"
#include <stdexcept>
#include <string>
#include <array>

class testEmail {
private:  
    Email *email;
    std::string user_email;                         
    int estado;
    void setUp();    
    void tearDown(); 
    void testSettings();  

public:
    testEmail(const std::string& email) : user_email(email) {}
    const static int SUCESSO =  0;         
    const static int FALHA   = -1;         
    std::string getEmailTested();                            
    int run();                             
};

inline std::string testEmail::getEmailTested(){
    return user_email;
}


class testPassword {
private:  
    Password *password;
    std::string user_password;                         
    int estado;
    void setUp();    
    void tearDown(); 
    void testSettings();  

public:
    testPassword(const std::string& password) : user_password(password) {}
    const static int SUCESSO =  0;         
    const static int FALHA   = -1;         
    std::string getPasswordTested();                            
    int run();                             
};

inline std::string testPassword::getPasswordTested(){
    return user_password;
}

class testText {
private:  
    Text *text;
    std::string user_text;                         
    int estado;
    void setUp();    
    void tearDown(); 
    void testSettings();  

public:
    testText(const std::string& text) : user_text(text) {}
    const static int SUCESSO =  0;         
    const static int FALHA   = -1;         
    std::string getTextTested();                            
    int run();                             
};

inline std::string testText::getTextTested(){
    return user_text;
}

class testLimit {
private:  
    Limit *limit;
    int user_limit;                         
    int estado;
    void setUp();    
    void tearDown(); 
    void testSettings();  

public:
    testLimit(const int limit) : user_limit(limit) {}
    const static int SUCESSO =  0;         
    const static int FALHA   = -1;         
    int getLimitTested();                            
    int run();                             
};

inline int testLimit::getLimitTested(){
    return user_limit;
}

class testCode {
private:  
    Code *code;
    std::string user_code;                         
    int estado;
    void setUp();    
    void tearDown(); 
    void testSettings();  

public:
    testCode(const std::string code) : user_code(code) {}
    const static int SUCESSO =  0;         
    const static int FALHA   = -1;         
    std::string getCodeTested();                            
    int run();                             
};

inline std::string testCode::getCodeTested(){
    return user_code;
}

class testColumn {
private:  
    Column *column;
    std::string user_column;                         
    int estado;
    void setUp();    
    void tearDown(); 
    void testSettings();  

public:
    testColumn(const std::string column) : user_column(column) {}
    const static int SUCESSO =  0;         
    const static int FALHA   = -1;         
    std::string getColumnTested();                            
    int run();                             
};

inline std::string testColumn::getColumnTested(){
    return user_column;
}

class TUAccount {
private:
    std::string user_email;
    std::string user_name;
    std::string user_password;

    Account *account;
    int estado;
    void setUp();    
    void tearDown(); 
    void testSettings();  

public:
    TUAccount(
        const std::string email, 
        const std::string name, 
        const std::string password) :         
        user_email(email), user_name(name), user_password(password)
        {}

    const static int SUCESSO =  0;         
    const static int FALHA   = -1;         
    std::string getAccountTested() const;                            
    int run();  
};

inline std::string TUAccount::getAccountTested() const{
    std::string text = "Conta com EMAIL: " + user_email + " NOME: " + user_name + " SENHA: " + user_password;
    return text;
}
