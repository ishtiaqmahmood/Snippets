#include <iostream>
#include <vector>
#include <algorithm>

int main() {
    std::vector<char> v1 = {'a', 'b', 'c'};
    std::vector<char> v2 = {'a', 'b', 'd'};
    bool res = std::lexicographical_compare(v1.begin(), v1.end(), v2.begin(), v2.end());
    std::cout << std::boolalpha << "v1 < v2: " << res << std::endl;
    return 0;
}
