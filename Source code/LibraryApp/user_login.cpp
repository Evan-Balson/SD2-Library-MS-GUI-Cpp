#include "user_login.h"

// Constructor definition
UserLogin::UserLogin(Program_Data& pd) : pd(pd) {}

// Definition of the login() member function
string UserLogin::login(string id, string pass) {

    // Iterate through the user data to find the provided username
    if (pd.sys_Users.find(id) != pd.sys_Users.end()) {
        // If the username is found, check if the password matches
        if (pass == pd.sys_Users[id].password) {
            // If the password matches, set the active user ID and return it
            pd.active_user = id;
            return id;
        }
        else {
            // If the password doesn't match, return an empty string (authentication failed)
            return "";
        }
    }
    else {
        // If the username doesn't exist, return an empty string (authentication failed)
        return "";
    }
}
