#include <iostream>
#include <shared_mutex>
#include <mutex>
#include <thread>

std::shared_mutex sm_mtx;
int val_data = 0;

void reader() {
    std::shared_lock lock(sm_mtx);
    std::cout << "Value: " << val_data << std::endl;
}

void writer() {
    std::unique_lock lock(sm_mtx);
    val_data++;
}

int main() {
    std::thread t1(reader), t2(writer), t3(reader);
    t1.join(); t2.join(); t3.join();
    return 0;
}
