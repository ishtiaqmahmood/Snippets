#include <iostream>
#include <vector>
#include <algorithm>

int main() {
    std::vector<int> v1 = {1, 2, 3, 4, 5};
    std::vector<int> v2 = {2, 4};
    bool inc = std::includes(v1.begin(), v1.end(), v2.begin(), v2.end());
    std::cout << std::boolalpha << "v1 includes v2: " << inc << std::endl;
    return 0;
}
