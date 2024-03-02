//header file for grocery class
#include "GroceryTracker.h"
//std library for input and output
#include <fstream>
#include <iostream>
#include <iomanip>
#include <algorithm>
#include <cctype>

// constructor initializes the class and loads items from the file
GroceryTracker::GroceryTracker(const std::string& inputFile) {
    loadItemsFromFile(inputFile);
}
//reads input file and populate item frequency
void GroceryTracker::loadItemsFromFile(const std::string& inputFile) {
    std::ifstream file(inputFile); // opens file read
    std::string item; // var to hold each item from file
    while (file >> item) {
        // converts to lowercase
        std::string lowerItem = toLower(item); // Convert item to lowercase before storing
        itemFrequencies[lowerItem]++;
    }
    file.close(); // closes file after read
}

// display main menu
void GroceryTracker::displayMenu() {
    int choice; // var to store users choice
    //loop
    do {
        std::cout << "\n1. Search for item frequency\n";
        std::cout << "2. Print all items and their frequencies\n";
        std::cout << "3. Print histogram of item frequencies\n";
        std::cout << "4. Exit\n";
        std::cout << "Enter your choice: ";
        std::cin >> choice;

        // process the choice
        switch (choice) {
            // search for item frequency
            case 1:
                searchItemFrequency();
                break;
                // print all items and frequency
            case 2:
                printAllItemsFrequency();
                break;
                //histogram of item frequency
            case 3:
                printHistogram();
                break;
                // exit
            case 4:
                std::cout << "Exiting program.\n";
                break;
                // for invalid choice
            default:
                std::cout << "Invalid choice. Please enter a number between 1 and 4.\n";
        }
    } while (choice != 4);// loops until option 4
}
// searches for specified item
void GroceryTracker::searchItemFrequency() {
    std::string item; // var for item searched for
    std::cout << "Enter item name: ";
    std::cin >> item; //read item name
    std::string lowerItem = toLower(item); // Convert input to lowercase before searching
    auto it = itemFrequencies.find(lowerItem);
    if (it != itemFrequencies.end()) {
        std::cout << it->first << " was purchased " << it->second << " times.\n";
    } else {
        std::cout << "Item not found.\n";
    }
}
//prints all items
void GroceryTracker::printAllItemsFrequency() {
    for (const auto& pair : itemFrequencies) {
        std::cout << pair.first << ": " << pair.second << "\n";
    }
}
// histogram
void GroceryTracker::printHistogram() {
    for (const auto& pair : itemFrequencies) {
        std::cout << std::left << pair.first << " ";
        for (int i = 0; i < pair.second; ++i) {
            std::cout << "*";
        }
        std::cout << "\n";
    }
}
// convert to lowercase
std::string GroceryTracker::toLower(const std::string& str) {
    std::string lowerStr = str;
    std::transform(lowerStr.begin(), lowerStr.end(), lowerStr.begin(),
                   [](unsigned char c){ return std::tolower(c); });
    return lowerStr;
}
