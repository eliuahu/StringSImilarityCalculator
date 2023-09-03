#include "SorensenDiceCoefficient.h"
#include <unordered_set>

float SorensenDiceCoefficient::diceCoefficient(const std::string& s1, const std::string& s2) {
    std::unordered_set<char> set1(s1.begin(), s1.end()), set2(s2.begin(), s2.end());
    std::unordered_set<char> intersection;
    for (char c : set1) {
        if (set2.find(c) != set2.end()) intersection.insert(c);
    }
    return (float) (2 * intersection.size()) / (set1.size() + set2.size());
}

float SorensenDiceCoefficient::calculateSimilarity(const std::string& s1, const std::string& s2) {
    return diceCoefficient(s1, s2);
}

