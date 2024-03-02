// FileManager.h
#ifndef FILEMANAGER_H
#define FILEMANAGER_H

#include <string>
#include <map>

class FileManager {
public:
    FileManager(const std::string &inputFilePath, const std::string &outputFilePath);
    void loadItems();
    void displayFrequency();
    void displayHistogram();
    void searchItemFrequency(const std::string &item);
    void saveFrequencies();

private:
    std::string inputFilePath;
    std::string outputFilePath;
    std::map<std::string, int> itemFrequencies;
};

#endif
