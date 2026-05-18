#include <iostream>
#include <vector>
#include <algorithm>
int main() {
    std::vector v = {1, 2, 5, 3, 4};
    auto it = std::is_sorted_until(v.begin(), v.end());
    std::cout << "Sorted until: " << *it << std::endl;
    return 0;
}
