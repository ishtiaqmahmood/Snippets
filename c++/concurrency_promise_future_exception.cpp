#include <iostream>
#include <future>
#include <stdexcept>

int main() {
    std::promise<int> p;
    std::future<int> f = p.get_future();

    std::thread t([&p]() {
        try {
            throw std::runtime_error("Future Error");
        } catch (...) {
            p.set_exception(std::current_exception());
        }
    });

    try {
        f.get();
    } catch (const std::exception& e) {
        std::cout << "Caught: " << e.what() << std::endl;
    }
    t.join();
    return 0;
}
