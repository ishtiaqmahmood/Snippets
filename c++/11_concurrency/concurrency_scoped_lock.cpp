#include <iostream>
#include <mutex>
#include <thread>

std::mutex m1_mtx, m2_mtx;

int main() {
    std::thread t([]() {
        std::scoped_lock lock(m1_mtx, m2_mtx); // Deadlock-free locking
        std::cout << "Locked both m1 and m2\n";
    });
    t.join();
    return 0;
}
