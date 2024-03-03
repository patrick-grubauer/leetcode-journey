//
// Created by gruba on 3/3/2024.
//

#ifndef P11_H
#define P11_H
#include <vector>

class Solution {
public:
    static int maxArea(std::vector<int>& height) {
        int maxArea = 0, left = 0, right = height.size() - 1;
        while (left <= right) {
            maxArea = std::max(maxArea, std::min(height[right], height[left]) * (right - left));
            if (height[left] >= height[right]) {
                right--;
            } else if (height[right] > height[left]) {
                left++;
            }
        }
        return maxArea;
    }
};
#endif //P11_H
