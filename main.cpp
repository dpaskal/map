#include <iostream>
#include "map.hpp"

int main() {
    std::cout << "Hello, World!" << std::endl;
    cs540::Map<int, int> map;
    cs540::Map<char, int> cmap = {{'a', 1}, {'b',2}};
    std::cout << map.i << std::endl;
    std::cout << cmap.size() << std::endl;
    return 0;
}
