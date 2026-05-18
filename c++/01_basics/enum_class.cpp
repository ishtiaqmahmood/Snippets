#include <iostream>

enum class Color { Red, Green, Blue };

int main() {
    Color c = Color::Red;
    if (c == Color::Red) std::cout << "Color is Red" << std::endl;
    return 0;
}
