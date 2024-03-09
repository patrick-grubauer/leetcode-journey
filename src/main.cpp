#include <iostream>
#include "problems/P49.h"
#include "vector"


int main() {
    std::vector<std::string> x = {"stop","pots","reed","","tops","deer","opts",""};
    for (auto basic_string: Solution::groupAnagrams(x)) {
        for (auto string: basic_string) {
            std::cout<<"'" << string<< "',";
        }
        std::cout << std::endl;
    }
    return 1;
}
