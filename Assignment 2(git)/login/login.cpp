#include <iostream>
#include <string>

using namespace std;

class User {
    string userEmail;
    string username;
    string password;
    string getPassword() {
        return this->password;
    }
public:
    User(const string userEmail, const string username, const string password) {
        this->userEmail = userEmail;
        this->username = username;
        this->password = password;
    }
    string getUsername() {
        return this->username;
    }
    string getEmail() {
        return this->userEmail;
    }

    bool validateUser(const string userEmail, const string username, const string password) {
        if(userEmail == getEmail()) {
            if(password == getPassword()) {
                return true;
            }
        }
        return false;
    }
};

ssize_t main() {
    cout << "this is a C++ login file for the login branch." << endl;
    cout << "Enter your email: ";
    string email;cin >> email;
    cout << "Enter your username: ";
    string username;cin >> username;
    cout << "Enter your password: ";
    string password;cin >> password;

    User *u = new User(email, username, password);
    
}