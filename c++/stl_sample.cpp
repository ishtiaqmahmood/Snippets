#include <iostream>
#include <vector>
#include <algorithm>
#include <random>

int main() {
    std::vector<int> v = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    std::vector<int> out;
    std::sample(v.begin(), v.end(), std::back_inserter(out), 3, std::mt19937{std::random_device{}()});
    for (int x : out) std::cout << x << " ";
    std::cout << std::endl;
    return 0;
}
