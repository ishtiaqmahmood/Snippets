#include <iostream>
#include <thread>
#include <chrono>

int main() {
    // std::jthread automatically joins on destruction
    std::jthread jt([](std::stop_token st) {
        while (!st.stop_requested()) {
            std::cout << "Working..." << std::endl;
            std::this_thread::sleep_for(std::chrono::milliseconds(100));
        }
    });

    std::this_thread::sleep_for(std::chrono::milliseconds(350));
    // jt will stop and join here
    return 0;
}
