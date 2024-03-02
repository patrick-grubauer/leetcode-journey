//
// Created by gruba on 3/2/2024.
//

#ifndef P15_H
#define P15_H
#include <algorithm>
#include <array>
#include <sstream>
#include <unordered_map>
#include <unordered_set>
#include <vector>

class Solution {
public:
    static std::vector<std::vector<int>> threeSum(std::vector<int>& nums) {
        std::vector<std::vector<int>> sol;
        std::sort(nums.begin(), nums.end());
        if (nums[0] > 0) return {};
        for (int i = 0; i < nums.size(); ++i) {
            if (i > 0 && nums[i] == nums[i - 1]) continue;
            int left = i + 1, right = nums.size() - 1;
            while (left < right) {
                int threeSum = nums[i] + nums[left] + nums[right];
                if (threeSum > 0) {
                    right -= 1;
                } else if (threeSum < 0) {
                    left += 1;
                } else {
                    sol.push_back({nums[i], nums[left], nums[right]});
                    left += 1;

                    while (nums[left] == nums[left - 1] && left < right) {
                        left += 1;
                    }
                }
            }
        }
        return sol;
    }
};
#endif //P15_H
