#include <iostream>
#include <vector>
#include <algorithm>
#include <random>

int main() {
    std::vector<int> v = {1, 2, 3, 4, 5};
    std::shuffle(v.begin(), v.end(), std::mt19937{std::random_device{}()});
    for (int x : v) std::cout << x << " ";
    std::cout << std::endl;
    return 0;
}
