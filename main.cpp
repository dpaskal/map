#include <iostream>
#include "map.hpp"

int main() {
    std::cout << "Hello, World!" << std::endl;
    cs540::Map<std::string, int> map;
    std::cout << map.i << std::endl;
    std::cout << map.size() << std::endl;

    return 0;
}
