#include <iostream>
#include <vector>
#include <string>

int main() {
    std::string str = "Hello World";
    std::string movedStr = std::move(str);
    std::cout << "Original: " << str << " (likely empty)" << std::endl;
    std::cout << "Moved: " << movedStr << std::endl;
    return 0;
}
