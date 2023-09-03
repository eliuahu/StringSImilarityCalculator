#ifndef SORENSEN_DICE_COEFFICIENT_H
#define SORENSEN_DICE_COEFFICIENT_H

#include "StringSimilarity.h"

class SorensenDiceCoefficient : public StringSimilarity {
public:
    float calculateSimilarity(const std::string& s1, const std::string& s2) override;
private:
    float diceCoefficient(const std::string& s1, const std::string& s2);
};

#endif // SORENSEN_DICE_COEFFICIENT_H
