//
// Created by Devan on 2/14/2024.
//

#ifndef INVESTMENTCALCULATOR_INVESTMENTCALCULATOR_H
#define INVESTMENTCALCULATOR_INVESTMENTCALCULATOR_H

#include <iostream>
#include <stdexcept>

class InvestmentCalculator {
public:
    InvestmentCalculator(double initialSum, double monthlyContribution, double annualRate, int period) {
        if (initialSum < 0 || monthlyContribution < 0 || annualRate < 0 || period < 0){
            throw std::invalid_argument("Arguments must be non-negative");
        }
        this->initialSum = initialSum;
        this->monthlyContribution = monthlyContribution;
        this->annualRate = annualRate / 100;
        this->period = period;
    }

    // Method placeholders. Actual implementation depends on business logic.
    void calculateAnnualGrowth() {
        // TODO: Implement this method
    };

    void calculateMonthlyGrowth() {
        // TODO: Implement this method
    }

    void generateReport() const {
        // TODO: Implement this method
    }

    void calculateGrowthWithoutDeposits() const {
        // TODO: Implement this method
    }

    void displayReport() const {
        // TODO: Implement this method
    }

    void calculateGrowthWithDeposits() const {

    }

private:
    double initialSum;
    double monthlyContribution;
    double annualRate;
    int period;

    // The addInterest method doesn't change any class variable, so it can be marked as const.
    double addInterest(double amount, double rate) const {
        double interestEarned = amount * rate;
        return amount + interestEarned;
    }
};

#endif //INVESTMENTCALCULATOR_INVESTMENTCALCULATOR_H