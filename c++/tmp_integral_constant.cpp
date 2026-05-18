#include <iostream>
#include <type_traits>

using two_t = std::integral_constant<int, 2>;
int main() {
    std::cout << two_t::value << std::endl;
    return 0;
}
