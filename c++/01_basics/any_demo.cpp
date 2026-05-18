#include <iostream>
#include <any>

int main() {
    std::any a = 10;
    std::cout << std::any_cast<int>(a) << std::endl;
    a = 3.14;
    std::cout << std::any_cast<double>(a) << std::endl;
    return 0;
}
