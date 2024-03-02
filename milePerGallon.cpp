#include<iostream>
using namespace std;

const double KM_TO_MI = 0.621371;
const double LITERS_TO_GALLONS = 0.264172;

double convertKilometersToMiles(double kilometers) {
    return kilometers * KM_TO_MI;
}

double convertLitersToGallons(double liters) {
    return liters * LITERS_TO_GALLONS;
}

double calculateMilesPerGallon(double miles, double gallons) {
    return miles / gallons;
}

int main() {
    double distanceInKilometers;
    double distanceInMiles;
    double gasInLiters;
    double gasInGallons;
    double userMilesPerGallon;

    cout << "Enter kilometers driven: ";
    cin >> distanceInKilometers;
    cout << "Enter liters of gas consumed: ";
    cin >> gasInLiters;

    distanceInMiles = convertKilometersToMiles(distanceInKilometers);
    gasInGallons = convertLitersToGallons(gasInLiters);
    userMilesPerGallon = calculateMilesPerGallon(distanceInMiles, gasInGallons);

    cout << "Miles driven: " << distanceInMiles << endl;
    cout << "Gallons of gas: " << gasInGallons << endl;
    cout << "Mileage: " << userMilesPerGallon << " mpg" << endl;

    return 0;
}
