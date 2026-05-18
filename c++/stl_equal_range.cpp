#include <iostream>
#include <vector>
#include <algorithm>
int main() {
    std::vector v = {1, 2, 2, 2, 3};
    auto [lower, upper] = std::equal_range(v.begin(), v.end(), 2);
    std::cout << "Count: " << std::distance(lower, upper) << std::endl;
    return 0;
}
