#include <iostream>
#include <set>

int main() {
    std::set<int> s = {5, 2, 8, 1, 5};
    for (int i : s) std::cout << i << " ";
    std::cout << std::endl;
    return 0;
}
