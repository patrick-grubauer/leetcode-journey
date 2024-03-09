//
// Created by gruba on 3/9/2024.
//

#ifndef P49_H
#define P49_H
#include <algorithm>
#include <string>
#include <unordered_map>
#include <vector>

class Solution {
public:
    static std::vector<std::vector<std::string>> groupAnagrams(std::vector<std::string>& strs) {
        std::vector<std::vector<std::string>> grouped_anagrams;
        std::pmr::unordered_map<std::string, int> processed;

        for (int i = 0; i < strs.size(); ++i) {
            std::string cp_str = strs[i];
            std::sort(cp_str.begin(), cp_str.end());
            if (processed.find(cp_str) != processed.end()) {
                grouped_anagrams[processed[cp_str]].push_back(strs[i]);
            } else {
                processed[cp_str] = grouped_anagrams.size();
                grouped_anagrams.push_back({strs[i]});
            }
        }
        return grouped_anagrams;
    }
};
#endif //P49_H
