#include <iostream>
#include "problems/P322.h"
#include "vector"


int main() {
    std::vector<int> x={1,2,5};
    std::cout << Solution::coinChange(x,11) << std::endl;
    return 1;
}
