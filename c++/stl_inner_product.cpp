#include <iostream>
#include <vector>
#include <numeric>

int main() {
    std::vector<int> v1 = {1, 2, 3};
    std::vector<int> v2 = {4, 5, 6};
    int res = std::inner_product(v1.begin(), v1.end(), v2.begin(), 0);
    std::cout << "Inner product: " << res << std::endl;
    return 0;
}
