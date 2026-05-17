#include <iostream>
#include <memory>

int main() {
    std::shared_ptr<int> ptr1 = std::make_shared<int>(200);
    {
        std::shared_ptr<int> ptr2 = ptr1;
        std::cout << "Use count: " << ptr1.use_count() << std::endl;
    }
    std::cout << "Use count: " << ptr1.use_count() << std::endl;
    return 0;
}
