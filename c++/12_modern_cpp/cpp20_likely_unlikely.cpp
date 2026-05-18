#include <iostream>
int main() {
    int x = 5;
    if (x > 0) [[likely]] {
        std::cout << "Positive\n";
    } else [[unlikely]] {
        std::cout << "Non-positive\n";
    }
    return 0;
}
