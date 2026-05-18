#include <iostream>
#include <expected>
#include <string>

std::expected<int, std::string> divide(int a, int b) {
    if (b == 0) return std::unexpected("Division by zero");
    return a / b;
}

int main() {
    auto res = divide(10, 2);
    if (res) std::cout << "Result: " << *res << std::endl;

    auto res2 = divide(10, 0);
    if (!res2) std::cout << "Error: " << res2.error() << std::endl;
    return 0;
}
