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