#include <iostream>
using namespace std;

void PrintOperation(int number1, int number2) {
    cout << number1 << "*" << number2 << "=" << (number1 * number2) << endl;
}

int main() {
    int evenNumber;
    int oddNumber;

    evenNumber = 6;
    oddNumber = 1;
    PrintOperation(evenNumber, oddNumber);

    return 0;
}