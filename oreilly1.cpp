#include <iostream>
using namespace std;

void myFunction(double x=0, double y=0, double z=0)
{
    cout << "A point in space: x = " << x << ", y = " << y << ", z = " << z << endl;
}

int main() {
    myFunction();
    myFunction(10);
    myFunction(10, 20);
    myFunction(10, 20, 30);

    return 0;
}