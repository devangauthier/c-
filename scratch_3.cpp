
#include <iostream>
using namespace std;

class Dog {
public:
    void SetWeight(int weightToSet);
    string GetSize() const;
private:
    int weight;
    string size;
};

void Dog::SetWeight(int weightToSet) {
    weight = weightToSet;


    if (weight <= 20) {
        size = "small";
    }
    else if (weight <= 45) {
        size = "medium";
    }
    else {
        size = "large";
    }
}

string Dog::GetSize() const {
    return size;
}

int main() {
    Dog buddy;

    buddy.SetWeight(65);

    cout << "Your dog is " << buddy.GetSize();
    return 0;
}