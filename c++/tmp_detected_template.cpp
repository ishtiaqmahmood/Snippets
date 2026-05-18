#include <iostream>
#include <type_traits>

template<typename T, typename = void>
struct has_value : std::false_type {};

template<typename T>
struct has_value<T, std::void_t<decltype(std::declval<T>().value)>> : std::true_type {};

struct S_val { int value; };

int main() {
    std::cout << std::boolalpha << has_value<S_val>::value << std::endl;
    return 0;
}
