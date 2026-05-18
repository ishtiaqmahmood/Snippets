#include <iostream>
#include <vector>
#include <algorithm>

int main() {
    std::vector<int> v = {5, 1, 4, 2, 8};
    std::sort(v.begin(), v.end());
    for (int i : v) std::cout << i << " ";
    std::cout << std::endl;
    return 0;
}
