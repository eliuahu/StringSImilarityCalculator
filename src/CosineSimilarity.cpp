#include "CosineSimilarity.h"
#include <cmath>

std::unordered_map<char, int> CosineSimilarity::calculateFrequencies(const std::string& s) {
    std::unordered_map<char, int> freq;
    for(char c : s) {
        freq[c]++;
    }
    return freq;
}

double CosineSimilarity::dotProduct(const std::unordered_map<char, int>& freq1, const std::unordered_map<char, int>& freq2) {
    double dot = 0.0;
    for(const auto& [key, val] : freq1) {
        if(freq2.find(key) != freq2.end()) {
            dot += val * freq2.at(key);
        }
    }
    return dot;
}

double CosineSimilarity::norm(const std::unordered_map<char, int>& freq) {
    double sum = 0.0;
    for(const auto& [key, val] : freq) {
        sum += val * val;
    }
    return std::sqrt(sum);
}

float CosineSimilarity::calculateSimilarity(const std::string& s1, const std::string& s2) {
    auto freq1 = calculateFrequencies(s1);
    auto freq2 = calculateFrequencies(s2);

    double dot = dotProduct(freq1, freq2);
    double norm1 = norm(freq1);
    double norm2 = norm(freq2);

    if(norm1 == 0 || norm2 == 0) return 0.0f;
    return dot / (norm1 * norm2);
}
