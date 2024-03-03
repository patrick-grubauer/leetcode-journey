//
// Created by gruba on 3/3/2024.
//

#ifndef P190_H
#define P190_H
#include <cstdint>

class Solution {
public:
    static uint32_t reverseBits(uint32_t n) {
        uint32_t reversed = 0;
        int numBits = sizeof(n) * 8 - 1;
        for (int i = numBits; i >= 0; --i) {
            reversed |= (((n & 1 << i)) >> i) << numBits - i;
        }
        return reversed;
    }
};
#endif //P190_H
