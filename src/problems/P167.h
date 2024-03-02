//
// Created by gruba on 3/2/2024.
//

#ifndef P167_H
#define P167_H
#include <vector>

class Solution {
public:
    static std::vector<int> twoSum(std::vector<int>& numbers, int target) {
        int16_t left = 0;
        int16_t right = numbers.size() - 1;
        while (left <= right) {
            if (numbers[left] + numbers[right] < target) {
                left++;
            } else if (numbers[left] + numbers[right] > target) {
                right--;
            } else {
                return {left + 1, right + 1};
            }
        }
    }
};
#endif //P167_H
