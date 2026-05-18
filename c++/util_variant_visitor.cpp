#include <iostream>
#include <variant>
#include <string>

template<class... Ts> struct overloaded_v : Ts... { using Ts::operator()...; };
template<class... Ts> overloaded_v(Ts...) -> overloaded_v<Ts...>;

int main() {
    std::variant<int, std::string> v = "Hello";
    std::visit(overloaded_v {
        [](int i) { std::cout << "int: " << i << std::endl; },
        [](const std::string& s) { std::cout << "string: " << s << std::endl; }
    }, v);
    return 0;
}
