#include <iostream>
#include <vector>
#include <algorithm>
int main() {
    std::vector v = {2, 4, 1, 3, 5};
    bool res = std::is_partitioned(v.begin(), v.end(), [](int x){ return x % 2 == 0; });
    std::cout << std::boolalpha << "Is partitioned: " << res << std::endl;
    return 0;
}
