#ifndef STRING_PREPROCESSOR_H
#define STRING_PREPROCESSOR_H

#include <string>

class StringPreprocessor {
public:
    std::string preprocess(const std::string& input) const;
private:
    std::string toLower(const std::string& input) const;
    std::string removeSpecialCharacters(const std::string& input) const;
};

#endif // STRING_PREPROCESSOR_H
