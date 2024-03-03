//
// Created by gruba on 3/3/2024.
//

#ifndef P191_H
#define P191_H
#include <cstdint>

class Solution {
public:
    static int hammingWeight(uint32_t n) {
        int count = 0;
        for (int i = 0; i < sizeof(n) * 8; ++i) {
            if (n & 1 << i) {
                count++;
            }
        }
        return count;
    }
};
#endif //P191_H
