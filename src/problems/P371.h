//
// Created by gruba on 3/3/2024.
//

#ifndef P371_H
#define P371_H
#include <cstddef>
#include <iostream>
#include <stdio.h>

class Solution {
public:
    static int getSum(int a, int b) {
        while (b!=0) {
            int temp=(a&b)<<1;
            a^=b;
            b=temp;
        }
        return a;
    }
};
#endif //P371_H
