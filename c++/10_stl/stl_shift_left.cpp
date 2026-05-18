#include <iostream>
#include <vector>
#include <algorithm>
int main() {
    std::vector v = {1, 2, 3, 4, 5};
    std::shift_left(v.begin(), v.end(), 2);
    for(int x : v) std::cout << x << " ";
    std::cout << std::endl;
    return 0;
}
