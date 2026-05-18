#include <iostream>
#include <list>

int main() {
    std::list<int> l = {10, 20, 30};
    l.push_front(5);
    l.push_back(40);
    for (int i : l) std::cout << i << " ";
    std::cout << std::endl;
    return 0;
}
