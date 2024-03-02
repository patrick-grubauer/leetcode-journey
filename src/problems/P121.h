//
// Created by gruba on 2/28/2024.
//

#ifndef P121_H
#define P121_H
#include <vector>

class Solution {
public:
    static int maxProfit(std::vector<int>& prices) {
        int buyingPrice = prices[0];
        int profit = 0;
        for (int i = 1; i < prices.size(); ++i) {
            if (prices[i] > buyingPrice) {
                profit = std::max(profit, prices[i] - buyingPrice);
            } else {
                buyingPrice = prices[i];
            }
        }
        return profit;
    }
};
#endif //P121_H
