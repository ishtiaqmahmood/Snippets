#include <iostream>
#include <vector>
#include <algorithm>

int main() {
    std::vector<int> v = {1, 3, 5, 7};
    bool none_even = std::none_of(v.begin(), v.end(), [](int n) { return n % 2 == 0; });
    std::cout << std::boolalpha << "None even: " << none_even << std::endl;
    return 0;
}
