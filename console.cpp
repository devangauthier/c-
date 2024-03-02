#include <windows.h>
#include <iostream>

int main() {
    // Get the console handle
    HANDLE hConsole = GetStdHandle(STD_OUTPUT_HANDLE);

    // Set text color to bright green on black background
    SetConsoleTextAttribute(hConsole, FOREGROUND_GREEN | FOREGROUND_INTENSITY);

    std::cout << "This text is bright green." << std::endl;

    // Reset to default colors
    SetConsoleTextAttribute(hConsole, FOREGROUND_RED | FOREGROUND_GREEN | FOREGROUND_BLUE);

    std::cout << "This text is back to the default color." << std::endl;

    return 0;
}
