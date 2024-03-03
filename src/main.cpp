#include <iostream>
#include "problems/P11.h"
#include "vector"


int main() {
    std::vector<int> x = {2,3,4,5,18,17,6};
    std::cout << Solution::maxArea(x) << std::endl;
    return 0;
}
