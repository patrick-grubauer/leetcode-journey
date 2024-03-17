//
// Created by gruba on 3/17/2024.
//

#ifndef P853_H
#define P853_H
#include <algorithm>
#include <stack>
#include <vector>

class Solution {
public:
    int static carFleet(int target, std::vector<int>& position, std::vector<int>& speed) {
        std::vector<std::pair<int, float>> cars(speed.size());
        std::stack<float> fleets;

        for (int i = 0; i < position.size(); ++i) {
            cars[i] = {position[i], float(target - position[i]) / speed[i]};
        }
        std::sort(cars.begin(), cars.end());
        for (int i = 0; i < cars.size(); ++i) {
            while (!fleets.empty() && (fleets.top() <= cars[i].second)) {
                fleets.pop();
            }
            fleets.push(cars[i].second);
        }
        return fleets.size();
    }
};
#endif //P853_H
