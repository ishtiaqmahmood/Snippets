#include <iostream>
#include <vector>
#include <algorithm>

int main() {
    std::vector<int> v = {1, 2, 3, 4, 5};
    if (std::binary_search(v.begin(), v.end(), 3)) {
        std::cout << "3 is in the vector" << std::endl;
    }
    return 0;
}
