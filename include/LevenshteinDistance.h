#ifndef LEVENSHTEIN_DISTANCE_H
#define LEVENSHTEIN_DISTANCE_H

#include "StringSimilarity.h"

class LevenshteinDistance : public StringSimilarity {
public:
    float calculateSimilarity(const std::string& s1, const std::string& s2) override;
private:
    int levenshtein(const std::string& s1, const std::string& s2);
};

#endif // LEVENSHTEIN_DISTANCE_H
