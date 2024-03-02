// Include guard to prevent multiple inclusions of the header file.
#ifndef GROCERYTRACKER_H
#define GROCERYTRACKER_H

// Includes for string and map, used in the GroceryTracker class.
#include <string>
#include <map>

// Declaration of the GroceryTracker class.
class GroceryTracker {
public:
    // Constructor that takes the input file name.
    GroceryTracker(const std::string& inputFile);
    // Method to display the interactive menu.
    void displayMenu();

private:
    // A map to hold the frequency
    std::map<std::string, int> itemFrequencies;
    //  load items from the file.
    void loadItemsFromFile(const std::string& inputFile);
    //  search frequency of a particular item.
    void searchItemFrequency();
    // frequency of all items.
    void printAllItemsFrequency();
    //  histogram based on item frequencies.
    void printHistogram();
    //  convert a string to lowercase.
    std::string toLower(const std::string& str);
};
// End
#endif // GROCERYTRACKER_H
