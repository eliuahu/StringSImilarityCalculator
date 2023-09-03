#ifndef COSINE_SIMILARITY_H
#define COSINE_SIMILARITY_H

#include "StringSimilarity.h"
#include <unordered_map>

class CosineSimilarity : public StringSimilarity {
public:
    float calculateSimilarity(const std::string& s1, const std::string& s2) override;
private:
    std::unordered_map<char, int> calculateFrequencies(const std::string& s);
    double dotProduct(const std::unordered_map<char, int>& freq1, const std::unordered_map<char, int>& freq2);
    double norm(const std::unordered_map<char, int>& freq);
};

#endif // COSINE_SIMILARITY_H
