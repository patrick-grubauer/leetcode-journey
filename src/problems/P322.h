//
// Created by gruba on 3/3/2024.
//

#ifndef P322_H
#define P322_H
#include <unordered_map>
#include <vector>

class Solution {
public:
    static int coinChange(std::vector<int>& coins, int amount) {
        std::unordered_map<int, int> memo;
        return coinChange(coins, amount, memo);
    }

    static int coinChange(std::vector<int>& coins, int amount, std::unordered_map<int, int>& memo) {
        if (amount < 0) return 0;
        if (amount == 0) return 0;

        if (memo.find(amount) != memo.end()) {
            return memo[amount];
        }

        int fastest = amount + 1;

        for (auto coin : coins) {
            if (amount - coin >= 0) {
                int result = coinChange(coins, amount - coin, memo);
                if (result >= 0 && result < fastest) {
                    fastest = result;
                }
            }
        }

        memo[amount] = (fastest == amount + 1) ? -1 : fastest + 1;
        return (fastest == amount + 1) ? -1 : fastest + 1;
    }
};
#endif //P322_H
