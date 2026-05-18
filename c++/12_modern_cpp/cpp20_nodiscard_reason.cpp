#include <iostream>
[[nodiscard("Must check result")]] int compute_val() { return 42; }
int main() {
    int x = compute_val();
    std::cout << x << std::endl;
    return 0;
}
