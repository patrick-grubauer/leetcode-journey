//
// Created by gruba on 3/17/2024.
//

#ifndef P57_H
#define P57_H
#include <vector>

class Solution {
public:
    std::vector<std::vector<int>> insert(std::vector<std::vector<int>>& intervals, std::vector<int>& newInterval) {
        std::vector<std::vector<int>> result;

        for (int i = 0; i < intervals.size(); ++i) {
            if (newInterval[1] < intervals[i][0]) {
                result.push_back(newInterval);
                std::copy(intervals.begin() + i, intervals.end(), std::back_inserter(result));
                return result;
            } else if (newInterval[0] > intervals[i][1]) {
                result.push_back(intervals[i]);
            } else {
                newInterval = {std::min(newInterval[0], intervals[i][0]), std::max(newInterval[1], intervals[i][1])};
            }
        }
        result.push_back(newInterval);
        return result;
    }
};
#endif //P57_H
