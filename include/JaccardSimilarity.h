#ifndef JACCARD_SIMILARITY_H
#define JACCARD_SIMILARITY_H

#include "StringSimilarity.h"

class JaccardSimilarity : public StringSimilarity {
public:
    float calculateSimilarity(const std::string& s1, const std::string& s2) override;
private:
    float jaccard(const std::string& s1, const std::string& s2);
};

#endif // JACCARD_SIMILARITY_H
