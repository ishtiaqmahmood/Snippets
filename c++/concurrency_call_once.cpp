#include <iostream>
#include <mutex>
#include <thread>

std::once_flag flag;
void init() { std::cout << "Initialized once\n"; }

int main() {
    std::thread t1([](){ std::call_once(flag, init); });
    std::thread t2([](){ std::call_once(flag, init); });
    t1.join(); t2.join();
    return 0;
}
