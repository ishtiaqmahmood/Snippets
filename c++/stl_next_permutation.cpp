#include <iostream>
#include <vector>
#include <algorithm>

int main() {
    std::vector<int> v = {1, 2, 3};
    do {
        for (int i : v) std::cout << i << " ";
        std::cout << std::endl;
    } while (std::next_permutation(v.begin(), v.end()));
    return 0;
}
