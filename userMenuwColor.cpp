#include <iostream>
#include <windows.h> // Include Windows.h for console functions

using namespace std;

// Function to set text color
void SetTextColor(HANDLE hConsole, int textColor) {
    SetConsoleTextAttribute(hConsole, textColor);
}

void showMenu(HANDLE hConsole) {
    system("cls");  // Clear the console screen
    SetTextColor(hConsole, FOREGROUND_GREEN | FOREGROUND_INTENSITY); // Set menu color
    cout << "1. Option 1" << endl;
    cout << "2. Option 2" << endl;
    cout << "3. Exit" << endl;
    SetTextColor(hConsole, FOREGROUND_RED | FOREGROUND_GREEN | FOREGROUND_BLUE); // Reset text color
    cout << "Enter your choice: ";
}

int main() {
    HANDLE hConsole = GetStdHandle(STD_OUTPUT_HANDLE);
    int choice;

    do {
        showMenu(hConsole);
        cin >> choice;

        switch(choice) {
            case 1:
                SetTextColor(hConsole, FOREGROUND_RED | FOREGROUND_INTENSITY); // Change color for option 1
                cout << "Option 1 selected" << endl;
                system("pause"); // Pause to view option result
                break;
            case 2:
                SetTextColor(hConsole, FOREGROUND_BLUE | FOREGROUND_INTENSITY); // Change color for option 2
                cout << "Option 2 selected" << endl;
                system("pause"); // Pause to view option result
                break;
            case 3:
    1            cout << "Exiting program." << endl;
                break;
            default:
                cout << "Invalid choice, please try again." << endl;
                system("pause"); // Pause to view message
        }
    } while (choice != 3);

    return 0;
}
