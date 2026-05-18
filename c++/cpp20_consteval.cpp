#include <iostream>

// consteval ensures the function is evaluated at compile time
consteval int square(int n) {
    return n * n;
}

int main() {
    constexpr int res = square(5);
    std::cout << "Square of 5 at compile time: " << res << std::endl;
    return 0;
}
