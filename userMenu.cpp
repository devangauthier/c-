#include <iostream>

using namespace std;

void showMenu() {
    cout << "1. Option 1" << endl;
    cout << "2. Option 2" << endl;
    cout << "3. Exit" << endl;
    cout << "Enter your choice: ";
}

int main() {
    int choice;

    do {
        showMenu();
        cin >> choice;

        switch(choice) {
            case 1:
                cout << "Option 1 selected" << endl;
                // Add functionality for option 1
                break;
            case 2:
                cout << "Option 2 selected" << endl;
                // Add functionality for option 2
                break;
            case 3:
                cout << "Exiting program." << endl;
                break;
            default:
                cout << "Invalid choice, please try again." << endl;
        }
    } while (choice != 3);

    return 0;
}
