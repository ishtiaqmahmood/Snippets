#include <iostream>
#include <vector>

int main() {
    std::vector<int> v = {1, 2, 3};
    // Proper init statement for range-based for
    for (int i = 0; int x : v) {
        std::cout << "Index " << i++ << ": " << x << std::endl;
    }
    return 0;
}
