
#include <iostream>
#include <string>
using namespace std;

class Pet {
public:
    Pet(string petName = "Unnamed", int yearsOld = -1);
    void Print();

private:
    string name;
    int age;
};

Pet::Pet(string petName, int yearsOld) {
    name = petName;
    age = yearsOld;
}

void Pet::Print() {
    cout << name << ", " << age << endl;
}

int main() {
    Pet dog;
    Pet cat("Milo");
    Pet bird("Rio", 2);

    cat.Print();
    bird.Print();
    dog.Print();

    return 0;
}