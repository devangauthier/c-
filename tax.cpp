#include <iostream>
using namespace std;

void PrintPrice(int price) {
    cout << "Price: $" << price << endl;
}

int main() {
    int productPrice;
    int taxAmount;

    productPrice = 25;
    taxAmount = 3;
    PrintPrice(productPrice + taxAmount);

    return 0;
}

#include <iostream>
using namespace std;

void PrintPoints(string name, int age, int totalPoints) {
    cout << name << " is " << age << endl;
    cout << name << " made " << totalPoints << " points" << endl;
}

int main() {
    string userName = "Ron";
    int userAge = 19;
    int regularTimePoints = 25;
    int overtimePoints = 3;

    PrintPoints(userName, userAge, regularTimePoints + overtimePoints);

    return 0;
}