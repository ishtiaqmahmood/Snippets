#include <iostream>
#include <deque>

int main() {
    std::deque<int> dq = {2, 3, 4};
    dq.push_front(1);
    dq.push_back(5);
    for (int i : dq) std::cout << i << " ";
    std::cout << std::endl;
    return 0;
}
