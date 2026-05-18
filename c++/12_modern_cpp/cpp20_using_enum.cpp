#include <iostream>

enum class Color { Red, Green, Blue };

void print_color(Color c) {
    switch (c) {
        using enum Color;
        case Red: std::cout << "Red" << std::endl; break;
        case Green: std::cout << "Green" << std::endl; break;
        case Blue: std::cout << "Blue" << std::endl; break;
    }
}

int main() {
    print_color(Color::Red);
    return 0;
}
