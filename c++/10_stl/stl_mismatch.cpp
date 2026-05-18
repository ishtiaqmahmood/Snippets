#include <iostream>
#include <vector>
#include <algorithm>
int main() {
    std::vector v1 = {1, 2, 3, 4};
    std::vector v2 = {1, 2, 5, 6};
    auto [it1, it2] = std::mismatch(v1.begin(), v1.end(), v2.begin());
    std::cout << "First mismatch: " << *it1 << " vs " << *it2 << std::endl;
    return 0;
}
