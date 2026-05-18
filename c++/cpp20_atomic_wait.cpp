#include <iostream>
#include <atomic>
#include <thread>

int main() {
    std::atomic<int> data{0};

    std::thread t([&]() {
        std::this_thread::sleep_for(std::chrono::seconds(1));
        data = 1;
        data.notify_one();
    });

    data.wait(0); // Efficiently waits until data is not 0
    std::cout << "Data changed to: " << data.load() << std::endl;
    t.join();
    return 0;
}
