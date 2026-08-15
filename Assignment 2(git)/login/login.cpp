#include <iostream>
#include <string>
#include <regex>

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
                perror("password do not match");
                return true;
            }
        }
        perror("email do not match");
        return false;
    }
};

bool is_valid_email(string &email) {
    regex pattern(R"(^[a-zA-Z0-9._%+-]+@[a-zA-Z0-9.-]+\.[a-zA-Z]{2,}$)");
    return regex_match(email, pattern);
}

ssize_t main() {
    cout << "this is a C++ login file for the login branch." << endl;
    cout << "Enter your email: ";
    string email;cin >> email;
    if(!is_valid_email(email)) {
        perror("not a valid email");
        return 1;
    }
    cout << "Enter your username: ";
    string username;cin >> username;
    cout << "Enter your password: ";
    string password;cin >> password;

    User *u = new User(email, username, password);
}