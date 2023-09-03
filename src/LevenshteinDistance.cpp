#include "LevenshteinDistance.h"
#include <vector>
#include <algorithm>

int LevenshteinDistance::levenshtein(const std::string& s1, const std::string& s2) {
    int m = s1.length(), n = s2.length();
    std::vector<std::vector<int>> dp(m + 1, std::vector<int>(n + 1));

    for(int i = 0; i <= m; ++i) dp[i][0] = i;
    for(int j = 0; j <= n; ++j) dp[0][j] = j;

    for(int i = 1; i <= m; ++i) {
        for(int j = 1; j <= n; ++j) {
            dp[i][j] = std::min({ dp[i-1][j] + 1, dp[i][j-1] + 1, dp[i-1][j-1] + (s1[i-1] != s2[j-1]) });
        }
    }
    return dp[m][n];
}

float LevenshteinDistance::calculateSimilarity(const std::string& s1, const std::string& s2) {
    return 1.0f - (float)levenshtein(s1, s2) / std::max(s1.length(), s2.length());
}