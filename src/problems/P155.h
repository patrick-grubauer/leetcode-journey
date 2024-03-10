//
// Created by gruba on 3/10/2024.
//

#ifndef P155_H
#define P155_H
#include <stack>

class MinStack {
public:
    std::stack<std::pair<int, int>> values;

    MinStack() {
    }

    void push(int val) {
        if (values.empty()) {
            values.push({val, val});
        } else {
            values.push({val, std::min(val, values.top().second)});
        }
    }

    void pop() {
        values.pop();
    }

    int top() {
        values.top().first;
    }

    int getMin() {
        return values.top().second;
    }
};

/**
 * Your MinStack object will be instantiated and called as such:
 * MinStack* obj = new MinStack();
 * obj->push(val);
 * obj->pop();
 * int param_3 = obj->top();
 * int param_4 = obj->getMin();
 */
#endif //P155_H
