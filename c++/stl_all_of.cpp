#include <iostream>
#include <vector>
#include <algorithm>

int main() {
    std::vector<int> v = {2, 4, 6, 8};
    bool all_even = std::all_of(v.begin(), v.end(), [](int n) { return n % 2 == 0; });
    std::cout << std::boolalpha << "All even: " << all_even << std::endl;
    return 0;
}
