#ifndef HAMMING_DISTANCE_H
#define HAMMING_DISTANCE_H

#include "StringSimilarity.h"

class HammingDistance : public StringSimilarity {
public:
    float calculateSimilarity(const std::string& s1, const std::string& s2) override;
private:
    int hamming(const std::string& s1, const std::string& s2);
};

#endif // HAMMING_DISTANCE_H
