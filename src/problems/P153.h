//
// Created by gruba on 2/28/2024.
//

#ifndef P153_H
#define P153_H
#include <vector>
/*
 *[4,5,6,7,8,9,0,1,2]
 *[9,8,0,1,2,3,4,5,6]
*[1,2,3,4,5,6,7,8,9,10,12,13]

 */
class Solution {
public:
    static int findMin(std::vector<int>& nums) {
        int left = 0;
        int right = nums.size() - 1;
        while(left < right) {
            int mid = left + (right-left)/2;
            if(nums[mid] < nums[right]) {
                right = mid;
            } else {
                left = mid+1;
            }
        }
        return nums[left];
    }
};
#endif //P153_H
