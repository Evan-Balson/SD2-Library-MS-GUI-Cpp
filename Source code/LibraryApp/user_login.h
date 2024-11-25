#ifndef USER_LOGIN_H
#define USER_LOGIN_H

#include "program_data.h"


class UserLogin {
public:
    // Constructor
    UserLogin(Program_Data& pd);

    // Member function for user login
    string login(string id, string pass);
    

private:
    std::string userID;
    std::string password;
    Program_Data& pd;
};

#endif // USER_LOGIN_H
