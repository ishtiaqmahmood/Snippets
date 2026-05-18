#include <iostream>
#include <type_traits>

template<typename, typename = std::void_t<>>
struct has_type_member : std::false_type {};

template<typename T>
struct has_type_member<T, std::void_t<typename T::type>> : std::true_type {};

struct A { using type = int; };
struct B {};

int main() {
    std::cout << std::boolalpha << has_type_member<A>::value << " " << has_type_member<B>::value << std::endl;
    return 0;
}
