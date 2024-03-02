#include <iostream>
using namespace std;

int CalculateCost(int age, int units) {
    int cost;
    if (age > 16 && age <= 26) {
        if (units > 20) {
            cost = (units - 20) * 500;
        }
        else {
            cost = 0;
        }
    }
    else {
        if (units < 3) {
            cost = units * 500;
        }
        else {
            cost = (units - 2) * 400 + 300;
        }
    }
    return cost;
}

int main() {
    int costReturned = CalculateCost(14, 11);

    cout << costReturned << endl;

    return 0;
}