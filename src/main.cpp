#include <iostream>
#include "problems/P380.h"
#include "vector"


int main() {
    RandomizedSet* obj = new RandomizedSet();
    bool param_1 = obj->insert(1);
    obj->insert(2);
    obj->insert(3);
    obj->insert(4);

    bool param_2 = obj->remove(1);
    int param_3 = obj->getRandom();
    std::cout << param_1 << std::endl;
    std::cout << param_2 << std::endl;

    std::cout << param_3 << std::endl;
    return 0;
}
