#include <iostream>
#include <vector>
#include <algorithm>

int main() {
    std::vector<int> v = {1, 2, 3, 4, 5};
    std::rotate(v.begin(), v.begin() + 2, v.end());
    for (int x : v) std::cout << x << " ";
    std::cout << std::endl;
    return 0;
}
