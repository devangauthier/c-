#include <iostream>

void inputNumber(double& number, const std::string& prompt) {
    std::cout << prompt << std::endl;
    std::cin >> number;
}

int main() {
    double firstNumber;
    double secondNumber;
    double thirdNumber;

    inputNumber(firstNumber, "Enter the first number");
    inputNumber(secondNumber, "Enter the second number");
    inputNumber(thirdNumber, "Enter the third number");

    const double NUMBER_OF_ELEMENTS = 3.0;
    double average = (firstNumber + secondNumber + thirdNumber) / NUMBER_OF_ELEMENTS;

    std::cout << "The average is: " << average << std::endl;

    return 0;
}