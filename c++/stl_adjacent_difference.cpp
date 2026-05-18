#include <iostream>
#include <vector>
#include <numeric>

int main() {
    std::vector<int> v = {1, 2, 4, 7, 11};
    std::vector<int> diff(v.size());
    std::adjacent_difference(v.begin(), v.end(), diff.begin());
    for (int x : diff) std::cout << x << " ";
    std::cout << std::endl;
    return 0;
}
