//
// Created by gruba on 3/10/2024.
//

#ifndef P128_H
#define P128_H
#include <unordered_set>

class Solution {
public:
    static int longestConsecutive(std::vector<int>& nums) {
        std::unordered_set<int> unique_number;
        for (int num: nums) {
            unique_number.insert(num);
        }
        int length = 0;
        int longest = 0;
        int lastnumber = (nums.size() > 0) ? nums[0] : 0;
        for (int i = 0; i < nums.size(); ++i) {
            if (unique_number.find(nums[i] - 1) == unique_number.end() && (i == 0 || nums[i] != lastnumber)) {
                lastnumber = nums[i];
                while (unique_number.find(nums[i] + length) != unique_number.end()) {
                    length++;
                }
                longest = std::max(longest, length);
                length = 0;
            }
        }
        return longest;
    }
};
#endif //P128_H
