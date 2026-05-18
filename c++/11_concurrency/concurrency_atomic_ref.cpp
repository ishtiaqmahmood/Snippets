#include <iostream>
#include <atomic>
#include <thread>
#include <vector>

struct Data { int value; };

int main() {
    Data d{0};
    {
        std::atomic_ref<int> v(d.value);
        std::vector<std::thread> threads;
        for(int i=0; i<10; ++i) threads.emplace_back([&](){ for(int j=0; j<100; ++j) v++; });
        for(auto& t : threads) t.join();
    }
    std::cout << "Result: " << d.value << std::endl;
    return 0;
}
