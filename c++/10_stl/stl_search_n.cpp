#include <iostream>
#include <vector>
#include <algorithm>
int main() {
    std::vector v = {1, 2, 2, 2, 3};
    auto it = std::search_n(v.begin(), v.end(), 3, 2);
    if(it != v.end()) std::cout << "Found 3 consecutive 2s\n";
    return 0;
}
