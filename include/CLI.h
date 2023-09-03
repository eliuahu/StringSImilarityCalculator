#ifndef CLI_H
#define CLI_H

#include <iostream>
#include <string>
#include <limits>
#include <memory>
#include "StringSimilarity.h"

class CLI {
public:
    void run();
private:
    int getAlgorithmChoice();
    void getStringInput(std::string& str1, std::string& str2);
    int askForNewString();
    std::unique_ptr<StringSimilarity> algo;
};

#endif // CLI_H
