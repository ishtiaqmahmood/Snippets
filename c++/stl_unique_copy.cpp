#include <iostream>
#include <vector>
#include <algorithm>

int main() {
    std::vector<int> v = {1, 1, 2, 2, 3, 3, 1, 1};
    std::vector<int> res;
    std::unique_copy(v.begin(), v.end(), std::back_inserter(res));
    for (int x : res) std::cout << x << " ";
    std::cout << std::endl;
    return 0;
}
