#include "StringPreprocessor.h"
#include <cctype>
#include <sstream>
#include <algorithm>

std::string StringPreprocessor::preprocess(const std::string& input) const {
    return removeSpecialCharacters(toLower(input));
}

std::string StringPreprocessor::toLower(const std::string& input) const {
    std::string result = input;
    std::transform(result.begin(), result.end(), result.begin(), ::tolower);
    return result;
}

std::string StringPreprocessor::removeSpecialCharacters(const std::string& input) const {
    std::ostringstream oss;
    for(char c : input) {
        if (std::isalnum(c)) {
            oss << c;
        }
    }
    return oss.str();
}
