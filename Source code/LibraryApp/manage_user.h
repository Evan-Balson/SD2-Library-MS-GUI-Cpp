#ifndef MANAGE_USERS_H
#define MANAGE_USERS_H


#include "validations.h"

using std::cout;
using std::cin;
using std::endl;

class Manage_users {
public:
    Manage_users(Program_Data& pd, Input_Validations& iv);

    void Register_user(string fName, string lName, string nwRole, string nwpassword);

    void Remove_user(string search);

    void Update_user(string search, string fName, string lName, string nwRole, string nwpassword);

private:
    Program_Data& pd;
    Input_Validations& iv;
    vector<string> nwlist;
    string nwName;
    string nwRole;
    string nwpassword;
    string search;
};

#endif
