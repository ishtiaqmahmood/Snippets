#include <iostream>
#include <vector>
#include <algorithm>

int main() {
    std::vector<int> v = {3, 1, 4, 1, 5, 9, 2, 6};
    auto [min_it, max_it] = std::minmax_element(v.begin(), v.end());
    std::cout << "Min: " << *min_it << ", Max: " << *max_it << std::endl;
    return 0;
}
