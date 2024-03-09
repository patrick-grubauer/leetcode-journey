//
// Created by gruba on 3/9/2024.
//

#ifndef P242_H
#define P242_H
#include <iostream>
#include <string>
#include <unordered_map>

class Solution {
public:
    static bool isAnagram(std::string s, std::string t) {
        std::unordered_map<char, int> char_freq;
        if (s.size() != t.size()) return false;
        for (auto c: s) {
            char_freq[c]++;
        }
        for (auto c: t) {
            if (char_freq.find(c) == char_freq.end()) return false;
            char_freq[c]--;
            if (char_freq[c] == 0) {
                char_freq.erase(c);
            }
        }
        return char_freq.size()==0;
    }
};
#endif //P242_H
