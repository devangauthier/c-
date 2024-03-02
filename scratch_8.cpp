/*
#include <iostream>
using namespace std;

class Airplane {
public:
    Airplane();
    void Print() const;
    void SetSpeed(int speed);
private:
    int speed;
};

Airplane::Airplane() {
    speed = 0;
}

void Airplane::SetSpeed(int speed) {
    this->speed = speed;
}

void Airplane::Print() const {
    cout << speed << " MPH" << endl;
}

int main() {
    Airplane boeing747;

    boeing747.SetSpeed(750);
    boeing747.Print();

    return 0;
}

#include <iostream>
using namespace std;

class Airplane {
public:
    Airplane(int totalSeats, int passengers);
    int GetAvailableSeats() const;
private:
    int totalSeats;
    int passengers;
};

Airplane::Airplane(int totalSeats, int passengers) {
    this->totalSeats = totalSeats;
    this->passengers = passengers;
}

int Airplane::GetAvailableSeats() const {
    return totalSeats - passengers;
}

int main() {
    Airplane boeing737(250, 90);

    cout << "Seats: " << boeing737.GetAvailableSeats() << endl;

    return 0;
}
#include <iostream>
using namespace std;

class Airplane {
public:
    Airplane();
    void AddPassengers(int passengers);
    int GetAvailableSeats() const;
private:
    int totalSeats;
    int passengers;
};

Airplane::Airplane() {
    totalSeats = 300;
    passengers = 0;
}

void Airplane::AddPassengers(int passengers) {
    this->passengers = this->passengers + passengers;
}

int Airplane::GetAvailableSeats() const {
    return totalSeats - passengers;
}

int main() {
    Airplane airbus330;

    airbus330.AddPassengers(1);
    airbus330.AddPassengers(2);

    cout << airbus330.GetAvailableSeats() << " seats" << endl;

    return 0;
}

#include <iostream>
using namespace std;

class InchSize {
public:
    InchSize(int wholeInches = 0, int sixteenths = 0);
    void Print() const;
    InchSize operator+(InchSize rhs);
private:
    int inches;
    int sixteenths;
};

InchSize InchSize::operator+(InchSize rhs) {
    InchSize totalSize;

    totalSize.inches = inches + rhs.inches;
    totalSize.sixteenths = sixteenths + rhs.sixteenths;

    // If sixteenths is greater than an inch, carry 1 to inches.
    if (totalSize.sixteenths >= 16) {
        totalSize.inches += 1;
        totalSize.sixteenths -= 16;
    }

    return totalSize;
}

InchSize::InchSize(int wholeInches, int sixteenthsOfInch) {
    inches = wholeInches;
    sixteenths = sixteenthsOfInch;
}

void InchSize::Print() const {
    cout << inches << " " << sixteenths << "/16 inches" << endl;
}

int main() {
    InchSize size1(4, 10);
    InchSize size2(3, 11);
    InchSize sumSize;

    sumSize = size1 + size2;

    sumSize.Print();

    return 0;
}

// "New" means new compared to previous level
#include <iostream>
using namespace std;

class InchSize {
public:
    InchSize(int wholeInches = 0, int sixteenths = 0);
    void Print() const;
    InchSize operator+(InchSize rhs);
    InchSize operator-(InchSize rhs);
private:
    int inches;
    int sixteenths;
};

InchSize InchSize::operator+(InchSize rhs) {
    InchSize totalSize;

    totalSize.inches = inches + rhs.inches;
    totalSize.sixteenths = sixteenths + rhs.sixteenths;

    // If sixteenths is greater than an inch, carry 1 to inches.
    if (totalSize.sixteenths >= 16) {
        totalSize.inches += 1;
        totalSize.sixteenths -= 16;
    }

    return totalSize;
}

// New: Overloaded - operator.
InchSize InchSize::operator-(InchSize rhs) {
    InchSize totalSize;

    totalSize.inches = inches - rhs.inches;
    totalSize.sixteenths = sixteenths - rhs.sixteenths;

    // If sixteenths is negative, and we have at least 1 inch, carry 1 from inches.
    if (totalSize.sixteenths < 0 && totalSize.inches > 0) {
        totalSize.inches -= 1;
        totalSize.sixteenths += 16;
    }

    return totalSize;
}

InchSize::InchSize(int wholeInches, int sixteenthsOfInch) {
    inches = wholeInches;
    sixteenths = sixteenthsOfInch;
}

void InchSize::Print() const {
    cout << inches << " " << sixteenths << "/16 inches" << endl;
}

int main() {
    InchSize size1(2, 12);
    InchSize size2(3, 11);
    InchSize spaceAvailable(8, 6);
    InchSize sumSize;
    InchSize remainingSpace;

    sumSize = size1 + size2;
    remainingSpace = spaceAvailable - sumSize;

    remainingSpace.Print();

    return 0;
}

// "New" means new compared to previous level
#include <iostream>
using namespace std;

class InchSize {
public:
    InchSize(int wholeInches = 0, int sixteenths = 0);
    void Print() const;
    InchSize operator+(InchSize rhs);
    InchSize operator+(int sixteenthsOfInch);
private:
    int inches;
    int sixteenths;
};

InchSize InchSize::operator+(InchSize rhs) {
    InchSize totalSize;

    totalSize.inches = inches + rhs.inches;
    totalSize.sixteenths = sixteenths + rhs.sixteenths;

    // If sixteenths is greater than an inch, carry 1 to inches.
    if (totalSize.sixteenths >= 16) {
        totalSize.inches += 1;
        totalSize.sixteenths -= 16;
    }

    return totalSize;
}

// New: Overloaded + operator adding integers.
InchSize InchSize::operator+(int sixteenthsOfInch) {
    InchSize totalSize;

    totalSize.inches = inches;
    totalSize.sixteenths = sixteenths + sixteenthsOfInch;

    // While sixteenths is greater than an inch, carry to inches.
    while (totalSize.sixteenths >= 16) {
        totalSize.inches += 1;
        totalSize.sixteenths -= 16;
    }

    return totalSize;
}

InchSize::InchSize(int wholeInches, int sixteenthsOfInch) {
    inches = wholeInches;
    sixteenths = sixteenthsOfInch;
}

void InchSize::Print() const {
    cout << inches << " " << sixteenths << "/16 inches" << endl;
}

int main() {
    InchSize size1(6, 13);
    InchSize size2(9, 12);
    InchSize sumSize;
    InchSize totalSize;

    sumSize = size1 + size2;
    totalSize = sumSize + 24;

    totalSize.Print();

    return 0;
}*/