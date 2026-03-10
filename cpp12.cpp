#include <iostream>
using namespace std;

int main() {
    int choice;

    cout << "Traffic Signal Menu\n";
    cout << "1. Red\n";
    cout << "2. Yellow\n";
    cout << "3. Green\n";
    cout << "Enter your choice: ";
    cin >> choice;

    switch (choice) {
        case 1:
            cout << "RED Signal → STOP";
            break;
        case 2:
            cout << "YELLOW Signal → READY";
            break;
        case 3:
            cout << "GREEN Signal → GO";
            break;
        default:
            cout << "Invalid signal choice";
    }

return 0;
}
