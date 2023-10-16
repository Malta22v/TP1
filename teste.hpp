#include "dominios.hpp"
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