#include <iostream>
#include <type_traits>

template<typename T, typename std::enable_if<std::is_pointer<T>::value, int>::type = 0>
void print_ptr(T val) { std::cout << *val << std::endl; }

int main() {
    int x = 42;
    print_ptr(&x);
    return 0;
}
