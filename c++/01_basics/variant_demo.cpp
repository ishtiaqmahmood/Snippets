#include <iostream>
#include <variant>
#include <string>

int main() {
    std::variant<int, std::string> v = 10;
    std::cout << std::get<int>(v) << std::endl;
    v = "Hello";
    std::cout << std::get<std::string>(v) << std::endl;
    return 0;
}
