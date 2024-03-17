//
// Created by gruba on 3/17/2024.
//

#ifndef P150_H
#define P150_H
#include <stack>
#include <string>
#include <vector>

#define BINARY_OP(op)\
{\
int b=values.top(); \
values.pop();\
int a=values.top(); \
values.pop();\
values.emplace(a op b);\
}


class Solution {
public:
    static int evalRPN(std::vector<std::string>& tokens) {
        std::stack<int16_t> values;
        for (int i = 0; i < tokens.size(); ++i) {
            if (tokens[i].size() == 1 && !(tokens[i][0] >= '0' && tokens[i][0] <= '9')) {
                switch (tokens[i][0]) {
                    case '*': BINARY_OP(*);
                        break;
                    case '/': BINARY_OP(/);
                        break;
                    case '+': BINARY_OP(+);
                        break;
                    case '-': BINARY_OP(-);
                        break;
                }
            } else {
                values.emplace(std::stoi(tokens[i]));
            }
        }

        return values.top();
    }
};
#endif //P150_H
