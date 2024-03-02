//
// Created by gruba on 3/2/2024.
//

#ifndef P3_H
#define P3_H
#include <string>
#include <unordered_map>

class Solution {
public:
    static int lengthOfLongestSubstring(std::string s) {
        std::unordered_map<char, int> position;
        int start = 0;
        int longestSize = 0;
        for (int i = 0; i < s.size(); ++i) {
            if (position.find(s[i]) != position.end() && position[s[i]] >= start) {
                int newSize = i - start;
                longestSize = std::max(longestSize, newSize);
                start = position[s[i]] + 1;
            }
            position[s[i]] = i;
        }

        int newSize = s.size() - start;
        longestSize = std::max(longestSize, newSize);

        return longestSize;
    }
};

#endif //P3_H
