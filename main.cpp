#include <iostream>
#include <limits>
#include "InvestmentCalculator.h"

void displayMenu();

void handleUserInput(InvestmentCalculator &calculator);

void getUserInvestmentParameters(double &initialInvestmentAmount, double &monthlyInvestmentAmount,
                                 double &annualInterestRate, int &years);

int main() {
    std::cout << "Welcome to the Airgead Banking Investment Calculator!\n";
    double initialInvestmentAmount, monthlyInvestmentAmount, annualInterestRate;
    int years;
    getUserInvestmentParameters(initialInvestmentAmount, monthlyInvestmentAmount, annualInterestRate, years);
    InvestmentCalculator calculator(initialInvestmentAmount, monthlyInvestmentAmount, annualInterestRate, years);
    bool running = true;
    while (running) {
        displayMenu();
        handleUserInput(calculator);
        std::cout << "Would you like to exit? (yes=1/no=0): ";
        std::cin >> running;
        running = !running;
    }
    return 0;
}

void displayMenu() {
    std::cout << "\nPlease choose an option:\n";
    std::cout << "1. Calculate growth without additional monthly deposits\n";
    std::cout << "2. Calculate growth with additional monthly deposits\n";
    std::cout << "Enter your choice: ";
}

void handleUserInput(InvestmentCalculator &calculator) {
    int choice;
    std::cin >> choice;
    switch (choice) {
        case 1:
            std::cout << "Calculating growth without additional monthly deposits...\n";
            calculator.calculateGrowthWithoutDeposits();
            calculator.displayReport();
            break;
        case 2:
            std::cout << "Calculating growth with additional monthly deposits...\n";
            calculator.calculateGrowthWithDeposits();
            calculator.displayReport();
            break;
        default:
            std::cout << "Invalid option selected. Please try again.\n";
    }
}

void getUserInvestmentParameters(double &initialInvestmentAmount, double &monthlyInvestmentAmount,
                                 double &annualInterestRate, int &years){
    std::cout << "Please, enter initial investment amount: ";
    if (!(std::cin >> initialInvestmentAmount)) {
        std::cerr << "Invalid input for initial investment amount. Please enter a number.\n";
        std::cin.clear();
        std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
    }
     //You can add similar input checks for other parameters as well.
}