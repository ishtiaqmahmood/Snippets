#include <iostream>
#include <type_traits>

template<typename T>
void check_integral() {
    static_assert(std::is_integral_v<T>, "T must be integral");
}

int main() {
    check_integral<int>();
    return 0;
}
