//
// Created by gruba on 2/28/2024.
//

#ifndef P217_H
#define P217_H
#include <unordered_set>

class Solution {
public:
    static bool containsDuplicate(std::vector<int>& nums) {
        std::unordered_set<int> distinctNums;
        for (auto num: nums) {
            if (auto numItr = distinctNums.find(num); numItr == distinctNums.end()) {
                distinctNums.insert(num);
            } else {
                return true;
            }
        }
        return false;
    }
};
#endif
