//
// Created by gruba on 3/3/2024.
//

#ifndef P70_H
#define P70_H
#include <unordered_map>

class Solution {
public:
    static int climbStairs(int n) {
        std::unordered_map<int, int> memo;
        return climbStairs(n, memo);
    }

    static int climbStairs(int n, std::unordered_map<int, int>& memo) {
        if (n == 0 || n == 1) return 1;

        if (memo.find(n - 2) == memo.end()) memo[n - 2] = climbStairs(n - 2,memo);
        if (memo.find(n - 1) == memo.end()) memo[n - 1] = climbStairs(n - 1,memo);
        return memo[n - 2] + memo[n - 1];
    }
};
#endif //P70_H
