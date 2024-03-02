#include <windows.h>
#include <iostream>

void gotoxy(int x, int y) {
    COORD coord;
    coord.X = x;
    coord.Y = y;
    SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), coord);
}

int main() {
    // Draw the horizontal and vertical lines for the large square
    for (int i = 0; i < 20; ++i) {
        gotoxy(10 + i, 5); // Top side
        std::cout << "*";
        gotoxy(10, 5 + i); // Left side
        std::cout << "*";
        gotoxy(10 + i, 5 + 19); // Bottom side
        std::cout << "*";
        gotoxy(10 + 19, 5 + i); // Right side
        std::cout << "*";
    }

    // Draw the smaller square
    for (int i = 0; i < 10; ++i) {
        gotoxy(20 + i, 15); // Top side of smaller square
        std::cout << "*";
        gotoxy(20, 15 + i); // Left side of smaller square
        std::cout << "*";
        gotoxy(20 + i, 15 + 9); // Bottom side of smaller square
        std::cout << "*";
        gotoxy(20 + 5, 15 + i); // Right side of smaller square
        std::cout << "*";
    }

    // Add diagonal lines for the star points
    int center_x = 20, center_y = 15; // Center for the star
    int length = 5; // Length of each star point
    for (int i = 0; i < length; ++i) {
        // Upper left to lower right diagonal
        gotoxy(center_x - i, center_y - i);
        std::cout << "*";
        gotoxy(center_x + i, center_y + i);
        std::cout << "*";

        // Lower left to upper right diagonal
        gotoxy(center_x - i, center_y + i);
        std::cout << "*";
        gotoxy(center_x + i, center_y - i);
        std::cout << "*";
    }

    return 0;
}
