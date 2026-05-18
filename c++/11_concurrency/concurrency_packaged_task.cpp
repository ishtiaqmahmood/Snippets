#include <iostream>
#include <future>

int task(int x) { return x * 2; }

int main() {
    std::packaged_task<int(int)> pt(task);
    std::future<int> f = pt.get_future();
    std::thread t(std::move(pt), 10);
    std::cout << "Result: " << f.get() << std::endl;
    t.join();
    return 0;
}
