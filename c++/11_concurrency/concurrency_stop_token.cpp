#include <iostream>
#include <thread>
#include <chrono>

int main() {
    std::jthread jt([](std::stop_token st) {
        while (!st.stop_requested()) {
            std::this_thread::sleep_for(std::chrono::milliseconds(100));
        }
        std::cout << "Stop requested, exiting thread\n";
    });
    std::this_thread::sleep_for(std::chrono::milliseconds(300));
    return 0;
}
