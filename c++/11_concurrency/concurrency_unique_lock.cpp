#include <iostream>
#include <mutex>
#include <thread>

std::mutex u_mtx;

int main() {
    std::unique_lock<std::mutex> lock(u_mtx, std::defer_lock);
    if (lock.try_lock()) {
        std::cout << "Locked!\n";
    }
    return 0;
}
