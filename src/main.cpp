#include <iostream>
#include "problems/P128.h"
#include "vector"


int main() {
    std::vector<int> x = {0,3,7,2,5,8,4,6,0,1};

    std::cout << Solution::longestConsecutive(x) << std::endl;
    return 1;
}
