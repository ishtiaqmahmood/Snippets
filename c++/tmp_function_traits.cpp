#include <iostream>
#include <type_traits>

template<typename T>
struct func_traits;

template<typename R, typename... Args>
struct func_traits<R(Args...)> {
    using result_type = R;
    static constexpr size_t arg_count = sizeof...(Args);
};

int main() {
    using T_ft = func_traits<int(double, char)>;
    std::cout << T_ft::arg_count << std::endl;
    return 0;
}
