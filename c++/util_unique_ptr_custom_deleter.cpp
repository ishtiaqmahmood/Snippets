#include <iostream>
#include <memory>

int main() {
    auto deleter = [](int* p) {
        std::cout << "Custom deleting " << *p << std::endl;
        delete p;
    };
    std::unique_ptr<int, decltype(deleter)> p(new int(42), deleter);
    return 0;
}
