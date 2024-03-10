#include <iostream>
#include "problems/P346.h"
#include "vector"


int main() {
    std::vector<int> x = {1,1,1,2,2,3};
    for (auto basic_string: Solution::topKFrequent(x,2)) {

        std::cout <<basic_string<<", "<< std::endl;
    }
    return 1;
}
