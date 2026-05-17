#include <iostream>
#include <memory>

int main() {
    std::shared_ptr<int> shared = std::make_shared<int>(300);
    std::weak_ptr<int> weak = shared;
    if (auto observed = weak.lock()) {
        std::cout << "Value: " << *observed << std::endl;
    }
    return 0;
}
