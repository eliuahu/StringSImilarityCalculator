#include "CLI.h"
#include "LevenshteinDistance.h"
#include "CosineSimilarity.h"
#include "JaccardSimilarity.h"
#include "HammingDistance.h"
#include "SorensenDiceCoefficient.h"
#include "StringPreprocessor.h"


int CLI::getAlgorithmChoice() {
    int choice;
    while (true) {
        std::cout << "Select algorithm:\n";
        std::cout << "1) Levenshtein Distance\n";
        std::cout << "2) Cosine Similarity\n";
        std::cout << "3) Jaccard Similarity\n";
        std::cout << "4) Hamming Distance\n";
        std::cout << "5) Sorensen Dice Coefficient\n";
        std::cout << "6) Exit\n";
        std::cout << "Choice: ";
        
        std::cin >> choice;
        if (std::cin.fail()) {
            std::cin.clear();
            std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
            std::cout << "Invalid input. Please enter an integer.\n";
            continue;
        }

        std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
        if (choice >= 1 && choice <= 6) {
            return choice;
        } else {
            std::cout << "Invalid choice. Try again.\n";
        }
    }
}

void CLI::getStringInput(std::string& str1, std::string& str2) {
    StringPreprocessor preprocessor;
    std::cout << "Enter first string: ";
    std::getline(std::cin, str1);
    std::cout << "Enter second string: ";
    std::getline(std::cin, str2);
    str1 = preprocessor.preprocess(str1);
    str2  = preprocessor.preprocess(str2);

}

int CLI::askForNewString() {
    char choice;
    while (true) {
        std::cout << "Would you like to enter new strings or exit? (y/n/e): ";
        std::cin >> choice;
        std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
        
        if (choice == 'y' || choice == 'n' || choice == 'e') {
            if (choice == 'y') return 1;
            if (choice == 'n') return 0;
            if (choice == 'e') return -1;
        } else {
            std::cout << "Invalid choice. Please enter 'y' for yes, 'n' for no, or 'e' to exit.\n";
        }
    }
}

void CLI::run() {
    
    std::string str1, str2;
    int isNewString = 1;

    while (true) {
        if (isNewString == 1) {
            getStringInput(str1, str2);
        }

        int choice = getAlgorithmChoice();
        
        if (choice == 6) {
            std::cout << "Exiting program.\n";
            break;
        }

        switch (choice) {
            case 1:
                algo = std::make_unique<LevenshteinDistance>();
                break;
            case 2:
                algo = std::make_unique<CosineSimilarity>();
                break;
            case 3:
                algo = std::make_unique<JaccardSimilarity>();
                break;
            case 4:
                algo = std::make_unique<HammingDistance>();
                break;
            case 5:
                algo = std::make_unique<SorensenDiceCoefficient>();
                break;
        }

        float similarity = algo->calculateSimilarity(str1, str2);
        std::cout << "Similarity score: " << similarity << std::endl;

        isNewString = askForNewString();
        
        if (isNewString == -1) {
            std::cout << "Exiting program.\n";
            break;
        }
    }
};
    
int main() {
    CLI cli;
    cli.run();
    return 0;
}
