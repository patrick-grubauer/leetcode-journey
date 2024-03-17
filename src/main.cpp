#include <iostream>
#include "problems/P853.h"
#include "vector"


int main() {
    std::vector<int> x = {10, 8, 0, 5, 3};
    std::vector<int> x1 = {2, 4, 1, 1, 3};

    std::cout << Solution::carFleet(12, x, x1) << std::endl;
    return 1;
}
