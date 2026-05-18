#include <iostream>
#include <vector>
#include <numeric>

int main() {
    std::vector<int> v = {1, 2, 3, 4, 5};
    std::vector<int> res(v.size());
    std::partial_sum(v.begin(), v.end(), res.begin());
    for (int x : res) std::cout << x << " ";
    std::cout << std::endl;
    return 0;
}
