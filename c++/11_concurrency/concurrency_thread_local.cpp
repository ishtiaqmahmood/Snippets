#include <iostream>
#include <thread>

thread_local int tl_val = 0;

void func_tl(int x) {
    tl_val = x;
    std::cout << "Thread " << std::this_thread::get_id() << " val: " << tl_val << std::endl;
}

int main() {
    std::thread t1(func_tl, 10), t2(func_tl, 20);
    t1.join(); t2.join();
    return 0;
}
