#include <iostream>

template<typename... Args>
auto sum_all(Args... args) { return (... + args); }

int main() {
    std::cout << sum_all(1, 2, 3, 4) << std::endl;
    return 0;
}
