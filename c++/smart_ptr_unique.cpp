#include <iostream>
#include <memory>

int main() {
    std::unique_ptr<int> ptr = std::make_unique<int>(100);
    std::cout << "Value: " << *ptr << std::endl;
    return 0;
}
