#include <iostream>
#include <concepts>

// Define a concept for numeric types
template<typename T>
concept Numeric = std::is_arithmetic_v<T>;

template<Numeric T>
T add(T a, T b) {
    return a + b;
}

int main() {
    std::cout << "Add integers: " << add(5, 10) << std::endl;
    std::cout << "Add doubles: " << add(5.5, 10.5) << std::endl;
    return 0;
}
