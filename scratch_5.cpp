
#include <iostream>
#include <string>
using namespace std;

class Bicycle {
public:
    Bicycle();
    void SetType(string bicycleType);
    void SetYear(int bicycleYear);
    void Print();
private:
    string type;
    int year;
};

Bicycle::Bicycle() {
    type = "NoType";    // NoType indicates brand was not set
    year = -1;          // -1 indicates year was not set
}

void Bicycle::SetType(string bicycleType) {
    type = bicycleType;
}

void Bicycle::SetYear(int bicycleYear) {
    year = bicycleYear;
}

void Bicycle::Print() {
    cout << type << " " << year << endl;
}

int main() {
    Bicycle commuterBike;

    commuterBike.Print();

    commuterBike.SetType("road");

    commuterBike.Print();

    return 0;
}


Define a constructor as indicated. Sample output for below program:
Year: 0, VIN: -1
Year: 2009, VIN: 444555666
#include <iostream>
using namespace std;

class CarRecord {
public:
    void   SetYearMade(int originalYear);
    void   SetVehicleIdNum(int vehIdNum);
    void   Print() const;
    CarRecord();
private:
    int    yearMade;
    int    vehicleIdNum;
};

// FIXME: Write constructor, initialize year to 0, vehicle ID num to -1.

/* Your solution goes here  */

void CarRecord::SetYearMade(int originalYear) {
    yearMade = originalYear;
}

void CarRecord::SetVehicleIdNum(int vehIdNum) {
    vehicleIdNum = vehIdNum;
}

void CarRecord::Print() const {
    cout << "Year: " << yearMade << ", VIN: " << vehicleIdNum << endl;
}

int main() {
    CarRecord familyCar;

    familyCar.Print();
    familyCar.SetYearMade(2009);
    familyCar.SetVehicleIdNum(444555666);
    familyCar.Print();

    return 0;
}