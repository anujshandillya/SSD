#include <iostream>
using namespace std;

void showDashboard() {
    cout << "Dashboard" << endl;
}

void showUsers() {
    cout << "Users: 100" << endl;
}

void showOrders() {
    cout << "Orders: 250" << endl;
}

void showRevenue() {
    cout << "Revenue: 50000" << endl;
}

int main() {
    showDashboard();
    showUsers();
    showOrders();
    showRevenue();

    return 0;
}