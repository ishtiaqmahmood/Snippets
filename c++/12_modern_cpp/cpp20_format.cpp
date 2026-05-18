#include <iostream>
#include <format>
#include <string>

int main() {
    std::string s = std::format("Hello, {}! You have {} messages.", "Alice", 5);
    std::cout << s << std::endl;
    return 0;
}
