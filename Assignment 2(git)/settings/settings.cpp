#include <iostream>
using namespace std;

void showSettings() {
    cout << "Settings" << endl;
}

void accountSettings() {
    cout << "Account settings" << endl;
}

void notificationSettings() {
    cout << "Notification settings" << endl;
}

void privacySettings() {
    cout << "Privacy settings" << endl;
}

int main() {
    showSettings();
    accountSettings();
    notificationSettings();
    privacySettings();

    return 0;
}