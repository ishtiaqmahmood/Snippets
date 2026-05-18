#include <iostream>
#include <any>
int main() {
    std::any a = 42;
    try {
        std::cout << std::any_cast<int>(a) << std::endl;
    } catch(const std::bad_any_cast& e) {
        std::cout << e.what() << std::endl;
    }
    return 0;
}
