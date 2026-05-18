#include <iostream>
#include <chrono>
#include <thread>

int main() {
    using namespace std::chrono_literals;
    auto start = std::chrono::high_resolution_clock::now();
    std::this_thread::sleep_for(10ms);
    auto end = std::chrono::high_resolution_clock::now();
    std::chrono::duration<double, std::milli> elapsed = end - start;
    std::cout << "Elapsed: " << elapsed.count() << "ms" << std::endl;
    return 0;
}
