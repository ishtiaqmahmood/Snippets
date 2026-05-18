#include <iostream>
#include <type_traits>

int main() {
    using T_cond = std::conditional<true, int, double>::type;
    T_cond x = 5;
    std::cout << sizeof(x) << std::endl;
    return 0;
}
