#include "HammingDistance.h"

int HammingDistance::hamming(const std::string& s1, const std::string& s2) {
    if (s1.length() != s2.length()) return -1;
    int count = 0;
    for(size_t i = 0; i < s1.length(); ++i) {
        if(s1[i] != s2[i]) count++;
    }
    return count;
}

float HammingDistance::calculateSimilarity(const std::string& s1, const std::string& s2) {
    int dist = hamming(s1, s2);
    if (dist == -1) return -1;
    return 1 - (float)dist / s1.length();
}