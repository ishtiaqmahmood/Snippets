#include <iostream>
#include <vector>
#include <algorithm>

int main() {
    std::vector<int> v = {1, 3, 5, 8};
    bool has_even = std::any_of(v.begin(), v.end(), [](int n) { return n % 2 == 0; });
    std::cout << std::boolalpha << "Has even: " << has_even << std::endl;
    return 0;
}
