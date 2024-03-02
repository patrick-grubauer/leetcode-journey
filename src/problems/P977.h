//
// Created by gruba on 3/2/2024.
//

#ifndef P977_H
#define P977_H
#include <vector>

class Solution {
public:
    static std::vector<int> sortedSquares(std::vector<int>& nums) {
        std::vector<int> squared(nums.size());
        int left = 0;
        int right = nums.size() - 1;
        for (int i = nums.size() - 1; i >= 0; --i) {
            
            if ((pow(nums[left],2) > pow(nums[right],2)) || (pow(nums[right],2) == pow(nums[left],2))) {
                squared[i] = pow(nums[left],2);
                left++;
            } else if (pow(nums[right],2) > pow(nums[left],2)) {
                squared[i] = pow(nums[right],2);
                right--;
            } else {
                squared[i] = pow(nums[left],2);
            }
        }
        return squared;
    }
};
#endif //P977_H
