//
// Created by gruba on 3/10/2024.
//

#ifndef P346_H
#define P346_H
#include <unordered_map>
#include <vector>

class Solution {
public:
    static std::vector<int> topKFrequent(std::vector<int>& nums, int k) {
        std::vector<std::vector<int>> count_array(nums.size()+1);
        std::unordered_map<int, int> freq;
        std::vector<int> k_freq;
        for (auto& value: nums) {
            freq[value]++;
        }
        for (auto value: freq) {
            count_array[value.second].push_back(value.first);
        }
        for (int i = count_array.size()-1; i >= 1; --i) {
            if (k <= 0) return k_freq;
            if (!count_array[i].empty()) {
                for (int j = 0; j < count_array[i].size(); ++j) {
                    k_freq.push_back(count_array[i][j]);
                    k--;
                }
            }
        }
        return k_freq;
    }
};
#endif //P346_H
