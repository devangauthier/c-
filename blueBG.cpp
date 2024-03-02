#include <windows.h>
#include <iostream>

using namespace std;

int main() {
    // Get console handle
    HANDLE hConsole = GetStdHandle(STD_OUTPUT_HANDLE);

    // Set background to blue and text to white
    SetConsoleTextAttribute(hConsole, BACKGROUND_BLUE | FOREGROUND_RED | FOREGROUND_GREEN | FOREGROUND_BLUE | FOREGROUND_INTENSITY);

    cout << "This text has a blue background and white text." << endl;

    // Reset to default
    SetConsoleTextAttribute(hConsole, FOREGROUND_RED | FOREGROUND_GREEN | FOREGROUND_BLUE);

    return 0;
}
