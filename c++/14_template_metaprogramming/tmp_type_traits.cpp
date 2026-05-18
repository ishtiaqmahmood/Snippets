#include <iostream>
#include <type_traits>

int main() {
    std::cout << std::boolalpha;
    std::cout << "is_integral<int>: " << std::is_integral_v<int> << std::endl;
    std::cout << "is_floating_point<int>: " << std::is_floating_point_v<int> << std::endl;
    return 0;
}
