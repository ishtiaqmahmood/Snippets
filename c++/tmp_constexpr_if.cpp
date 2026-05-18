#include <iostream>
#include <type_traits>

template<typename T>
auto get_val_ce(T t) {
    if constexpr (std::is_pointer_v<T>) return *t;
    else return t;
}

int main() {
    int x = 10;
    std::cout << get_val_ce(x) << " " << get_val_ce(&x) << std::endl;
    return 0;
}
