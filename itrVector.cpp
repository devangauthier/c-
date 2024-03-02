#include <iostream>
#include <vector>
#include <algorithm>

int main() {
    // Define a vector with 4 numbers
    std::vector<int> vec = {1, 2, 3, 4};

    // Try to find the number 3 in the vector
    // and replace it with 4 if found
    if (auto itr = std::find(vec.begin(), vec.end(), 3); itr != vec.end())
        *itr = 4; // This modifies the original vector

    // Print all elements in the vector
    for (auto element : vec)
        std::cout << element << std::endl; // This does not modify the vector

    // Loop through the vector without actually modifying it
    for (auto &element : vec) {
        element += 0; // This would modify the vector if the operation was other than adding 0
    }

    // Print all elements in the vector again
    for (auto element : vec)
        std::cout << element << std::endl; // This does not modify the vector

    return 0;
}