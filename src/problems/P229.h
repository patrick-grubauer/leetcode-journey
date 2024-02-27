//
// Created by gruba on 2/27/2024.
//

#ifndef P229_H
#define P229_H
#include <unordered_map>
#include <vector>

class Solution {
public:
    static std::vector<int> majorityElement(std::vector<int>& nums) {
        std::unordered_map<int, int> elementCounts;
        for (int& num: nums) {
            !elementCounts[num] ? (elementCounts[num] = 1) : (elementCounts[num]++);
        }
        int minCount = nums.size() / 3;
        std::vector<int> greaterElements;
        for (std::pair<const int,int> element_count: elementCounts) {
            if (element_count.second > minCount) {
                greaterElements.emplace_back(element_count.first);
            }
        }
        return greaterElements;
    }
};
#endif
