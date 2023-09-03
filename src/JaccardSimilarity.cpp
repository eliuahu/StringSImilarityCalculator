#include "JaccardSimilarity.h"
#include <unordered_set>

float JaccardSimilarity::jaccard(const std::string& s1, const std::string& s2) {
    std::unordered_set<char> set1(s1.begin(), s1.end()), set2(s2.begin(), s2.end());
    std::unordered_set<char> intersection, union_set(set1);
    for(char c : set2) {
        union_set.insert(c);
        if (set1.find(c) != set1.end()) intersection.insert(c);
    }
    return (float) intersection.size() / union_set.size();
}

float JaccardSimilarity::calculateSimilarity(const std::string& s1, const std::string& s2) {
    return jaccard(s1, s2);
}