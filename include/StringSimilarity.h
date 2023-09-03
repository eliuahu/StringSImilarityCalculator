#ifndef STRING_SIMILARITY_H
#define STRING_SIMILARITY_H

#include <string>

class StringSimilarity {
public:
    virtual float calculateSimilarity(const std::string& s1, const std::string& s2) = 0;
};

#endif // STRING_SIMILARITY_H
