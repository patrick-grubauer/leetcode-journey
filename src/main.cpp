#include <iostream>
#include "problems/P153.h"
#include "vector"


int main() {
    //5,7,8,9,1,2
    //5,7,8,9,1,2,3,4,5,6,
    std::vector<int> x = {1,2,3,4,5,6};
    std::cout << Solution::findMin(x) << std::endl;


    return 0;
}
