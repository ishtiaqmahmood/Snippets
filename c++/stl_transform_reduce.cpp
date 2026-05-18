#include <iostream>
#include <vector>
#include <numeric>
#include <functional>

int main() {
    std::vector<int> v = {1, 2, 3, 4};
    // Sum of squares
    int res = std::transform_reduce(v.begin(), v.end(), 0, std::plus<>(), [](int n) { return n * n; });
    std::cout << "Sum of squares: " << res << std::endl;
    return 0;
}
