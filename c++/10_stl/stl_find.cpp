#include <iostream>
#include <vector>
#include <algorithm>

int main() {
    std::vector<int> v = {10, 20, 30, 40};
    auto it = std::find(v.begin(), v.end(), 30);
    if (it != v.end()) std::cout << "Found 30" << std::endl;
    return 0;
}
