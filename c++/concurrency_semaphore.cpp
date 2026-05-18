#include <iostream>
#include <semaphore>
#include <thread>

std::counting_semaphore<1> sem(0);

int main() {
    std::thread t([]() {
        std::cout << "Thread working...\n";
        sem.release();
    });
    sem.acquire();
    std::cout << "Main continuing\n";
    t.join();
    return 0;
}
