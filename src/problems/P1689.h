//
// Created by gruba on 2/25/2024.
//

#ifndef P1689_PARTITIONING_INTO_MIN_H
#define P1689_PARTITIONING_INTO_MIN_H

namespace P1689 {
    class Solution {
    public:
        static int minPartitions(std::string&& s) {
            int8_t minNumber = 0;
            for (auto element: s) {
                int8_t digit = static_cast<int8_t> (element - '0');
                if (digit == 9) {
                    return 9;
                }
                minNumber = std::max(digit, minNumber);
            }
            return minNumber;
        }
    };
} // validsudoku
#endif //P1689_PARTITIONING_INTO_MIN_H
