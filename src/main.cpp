#include <iostream>
#include "problems/P15.h"
#include "vector"


int main() {

    std::vector<int> x = {-1,0,1,2,-1,-4};
    for (auto sorted_square: Solution::threeSum(x)) {
        std::cout << "--------" << std::endl;
        for (auto square: sorted_square) {
            std::cout << square << std::endl;
        }
    }


    return 0;
}
