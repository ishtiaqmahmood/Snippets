#include <iostream>
#include <vector>
#include <algorithm>

int main() {
    std::vector<int> v = {1, 2, 4, 4, 5, 6};
    auto low = std::lower_bound(v.begin(), v.end(), 4);
    auto up = std::upper_bound(v.begin(), v.end(), 4);
    std::cout << "Lower bound at position: " << (low - v.begin()) << std::endl;
    std::cout << "Upper bound at position: " << (up - v.begin()) << std::endl;
    return 0;
}
