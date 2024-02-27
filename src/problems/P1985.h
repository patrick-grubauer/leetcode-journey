#ifndef P1985_H
#define P1985_H
#include <queue>
#include <string>

class MinStrComp {
public:
    bool operator()(std::string& a, std::string& b) {
        if (a.size() != b.size()) {
            return b.size() < a.size();
        }
        return b < a;
    }
};

class Solution {
public:
    static std::string kthLargestNumber(std::vector<std::string>&& nums, int const k) {
        std::priority_queue<std::string, std::vector<std::string>, MinStrComp> minHeap;

        for (auto element: nums) {
            minHeap.push(element);
            if (minHeap.size() > k) {
                minHeap.pop();
            }
        }
        return minHeap.top();
    }
};


#endif //P1985_H
