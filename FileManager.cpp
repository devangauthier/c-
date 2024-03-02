// FileManager.cpp
#include "FileManager.h"
#include <fstream>
#include <iostream>
#include <iomanip>

FileManager::FileManager(const std::string &inputFilePath, const std::string &outputFilePath) :
        inputFilePath(inputFilePath), outputFilePath(outputFilePath) {}

void FileManager::loadItems() {
    std::ifstream inputFile(inputFilePath);
    std::string item;
    int quantity;

    if (!inputFile.is_open()) {
        std::cerr << "Error opening input file!" << std::endl;
        return;
    }

    while (inputFile >> item >> quantity) {
        itemFrequencies[item] += quantity;
    }

    inputFile.close();
}

void FileManager::displayFrequency() {
    for (const auto &pair : itemFrequencies) {
        std::cout << pair.first << ": " << pair.second << std::endl;
    }
}

void FileManager::displayHistogram() {
    for (const auto &pair : itemFrequencies) {
        std::cout << pair.first << " ";
        for (int i = 0; i < pair.second; ++i) {
            std::cout << "*";
        }
        std::cout << std::endl;
    }
}

void FileManager::searchItemFrequency(const std::string &item) {
    auto it = itemFrequencies.find(item);
    if (it != itemFrequencies.end()) {
        std::cout << it->first << " is purchased " << it->second << " times." << std::endl;
    } else {
        std::cout << "Item not found." << std::endl;
    }
}

void FileManager::saveFrequencies() {
    std::ofstream outputFile(outputFilePath);

    if (!outputFile.is_open()) {
        std::cerr << "Error opening output file!" << std::endl;
        return;
    }

    for (const auto &pair : itemFrequencies) {
        outputFile << pair.first << " " << pair.second << std::endl;
    }

    outputFile.close();
}
