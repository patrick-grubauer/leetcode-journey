//
// Created by gruba on 2/27/2024.
//

#ifndef P380_H
#define P380_H
#include <random>
#include <unordered_map>
#include <unordered_set>

class RandomizedSet {
    std::random_device rd;

    //map is only here to remmveo in O(1)
    std::unordered_map<int, int> valuesIndexMap;
    //only here for O(1) random
    std::vector<int> values;
    std::mt19937 gen;

public:
    RandomizedSet() {
        std::mt19937 gen(rd());
    }

    bool insert(int val) {
        if (auto valIt = valuesIndexMap.find(val); valIt != valuesIndexMap.end()) {
            return false;
        }
        values.push_back(val);
        valuesIndexMap[val] = values.size() - 1;
        return true;
    }

    bool remove(int val) {
        if (auto valIt = valuesIndexMap.find(val); valIt==valuesIndexMap.end()) {
            return false;
        }
        auto index = valuesIndexMap.find(val);
        values[index->second] = values.back();
        values.pop_back();
        valuesIndexMap[values[index->second]] = index->second;
        valuesIndexMap.erase(index);
        return true;
    }

    int getRandom() {
        std::uniform_int_distribution<> dis(0, values.size() - 1);
        return values[dis(gen)];
    }
};
#endif //P380_H
