#include <iostream>

constexpr int factorial(int n) {
    return n <= 1 ? 1 : n * factorial(n - 1);
}

int main() {
    constexpr int val = factorial(5);
    std::cout << "Factorial of 5: " << val << std::endl;
    return 0;
}
