#include <iostream>
#include <vector>

using std::cout;
using std::cin;
using std::endl;
using std::flush;

struct collection
{
    int x;
    float y;
};

void printArrays(const std::vector<int>& intArray, const std::vector<collection>& collectionArray);

int main()
{
    int numElements = 0;
    cout << "How many elements would you like? " << flush;
    cin >> numElements;

    // Input validation
    while (numElements <= 0)
    {
        cout << "Number of elements must be positive. Please try again: ";
        cin >> numElements;
    }

    std::vector<int> intArray(numElements);
    std::vector<collection> collectionArray(numElements);

    for (int i = 0; i < numElements; i++)
    {
        intArray[i] = i;
        collectionArray[i].x = i;
        collectionArray[i].y = i + .5;
    }
    printArrays(intArray, collectionArray);
    return 0;
}

void printArrays(const std::vector<int>& intArray, const std::vector<collection>& collectionArray)
{
    for (size_t i = 0; i < intArray.size(); i++)
    {
        cout << intArray[i] << " ";
        cout << collectionArray[i].y << std::endl;
    }
}