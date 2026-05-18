#include <iostream>
#include <latch>
#include <thread>
#include <vector>

int main() {
    std::latch start(3);
    std::vector<std::thread> threads;
    for (int i = 0; i < 3; ++i) {
        threads.emplace_back([&, i]() {
            std::cout << "Thread " << i << " ready\n";
            start.count_down();
        });
    }
    start.wait();
    std::cout << "All threads started!\n";
    for (auto& t : threads) t.join();
    return 0;
}
