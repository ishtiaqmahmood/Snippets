#include <iostream>
#include <type_traits>

template<typename T>
typename std::enable_if<std::is_integral<T>::value, T>::type
process(T val) { return val * 2; }

int main() {
    std::cout << process(10) << std::endl;
    return 0;
}
