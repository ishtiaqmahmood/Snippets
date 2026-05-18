#include <iostream>
#include <barrier>
#include <thread>
#include <vector>

int main() {
    std::barrier sync(3, []() noexcept { std::cout << "Barrier crossed\n"; });
    std::vector<std::thread> threads;
    for (int i = 0; i < 3; ++i) {
        threads.emplace_back([&, i]() {
            std::cout << "Thread " << i << " reached barrier\n";
            sync.arrive_and_wait();
            std::cout << "Thread " << i << " continuing\n";
        });
    }
    for (auto& t : threads) t.join();
    return 0;
}
