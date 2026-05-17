#include <iostream>
#include <future>

int calculate() {
    return 42;
}

int main() {
    std::future<int> fut = std::async(calculate);
    std::cout << "Result: " << fut.get() << std::endl;
    return 0;
}
