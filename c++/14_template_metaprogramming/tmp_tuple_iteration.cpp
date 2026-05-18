#include <iostream>
#include <tuple>
#include <utility>

template<typename Tuple, size_t... Is>
void print_tuple_impl(const Tuple& t, std::index_sequence<Is...>) {
    ((std::cout << std::get<Is>(t) << " "), ...);
    std::cout << std::endl;
}

int main() {
    auto t = std::make_tuple(1, 2.5, "hello");
    print_tuple_impl(t, std::make_index_sequence<3>{});
    return 0;
}
