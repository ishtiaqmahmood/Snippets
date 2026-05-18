#include <iostream>
#include <vector>
#include <algorithm>

int main() {
    auto square = [](int x) { return x * x; };
    std::cout << "Square of 5: " << square(5) << std::endl;
    return 0;
}
