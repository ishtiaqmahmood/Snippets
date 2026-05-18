#include <iostream>
#include <vector>
#include <algorithm>
int main() {
    std::vector v = {1, 2, 3, 4, 5};
    bool found = std::binary_search(v.begin(), v.end(), 3);
    std::cout << std::boolalpha << "Found 3: " << found << std::endl;
    return 0;
}
