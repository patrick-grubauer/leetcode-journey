//
// Created by gruba on 3/17/2024.
//

#ifndef P739_H
#define P739_H
#include <stack>
#include <vector>

class Solution {
public:
    static std::vector<int> dailyTemperatures(std::vector<int>& temperatures) {
        std::stack<std::pair<int, int>> temp;
        std::vector<int> result(temperatures.size());

        for (int i = 0; i < temperatures.size(); ++i) {
            while (!temp.empty() && temperatures[i] > temp.top().first) {
                result[temp.top().second] = i - temp.top().second;
                temp.pop();
            }
            temp.emplace(temperatures[i], i);
        }
        return result;
    }
};
#endif //P739_H
