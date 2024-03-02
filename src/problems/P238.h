//
// Created by gruba on 2/28/2024.
//

#ifndef P238_H
#define P238_H
#include <vector>

class Solution {
public:
    static std::vector<int> productExceptSelf(std::vector<int>& nums) {
        std::vector<int> product_array(nums.size());
        int produkt = 1;
        for (int i = 0; i < nums.size(); ++i) {
            product_array[i] = produkt;
            produkt *= nums[i];
        }
        produkt = 1;
        for (int i = nums.size() - 1; i >= 0; --i) {
            product_array[i] *= produkt;
            produkt *= nums[i];
        }
        return product_array;
    }
};
#endif //P238_H
