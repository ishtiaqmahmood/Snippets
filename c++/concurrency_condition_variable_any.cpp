#include <iostream>
#include <condition_variable>
#include <mutex>
#include <thread>
#include <chrono>

std::mutex m_mtx;
std::condition_variable_any cv;
bool ready = false;

int main() {
    std::thread t([]() {
        std::this_thread::sleep_for(std::chrono::seconds(1));
        std::lock_guard<std::mutex> lk(m_mtx);
        ready = true;
        cv.notify_one();
    });

    std::unique_lock<std::mutex> lk(m_mtx);
    cv.wait(lk, []{ return ready; });
    std::cout << "Ready!" << std::endl;
    t.join();
    return 0;
}
