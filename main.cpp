#include <iostream>
#include "map.hpp"

int main() {
    std::cout << "Hello, World!" << std::endl;
    cs540::Map<int, int> map;
    cs540::Map<char, int> cmap = {{'a', 1}, {'b',2}};
    std::cout << cmap.size() << std::endl;
    cs540::Map<char, int> newmap(cmap);
    std::cout << newmap.size() << std::endl;

    return 0;
}
