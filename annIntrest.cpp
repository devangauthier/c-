#include <iostream>
#include <limits>

// Function to clear the input buffer
void clearCin() {
    std::cin.clear();
    std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
}

// Template function to get positive input
template<typename T>
T getPositiveInput(const std::string& prompt) {
    T value;
    while (true) {
        std::cout << prompt;
        std::cin >> value;
        if (std::cin.fail() || value <= 0) {
            std::cout << "Invalid input. Please enter a positive number.\n";
            clearCin();
        } else {
            clearCin(); // Clear the buffer to handle next input correctly
            return value;
        }
    }
}

int main() {
    std::cout << "Welcome to the Investment Growth Calculator.\n";

    double initialInvestment = getPositiveInput<double>("Enter the initial investment amount: ");
    double monthlyDeposit = getPositiveInput<double>("Enter the monthly deposit amount: ");
    double annualInterestRate = getPositiveInput<double>("Enter the annual interest rate (as a percent): ");
    int years = getPositiveInput<int>("Enter the number of years for the investment: ");

    std::cout << "Inputs collected successfully. Press Enter to continue to the reports...";
    std::cin.get();

    return 0;
}
