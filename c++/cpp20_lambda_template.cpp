#include <iostream>
#include <vector>
int main() {
    auto f = []<typename T>(std::vector<T> v) {
        std::cout << "Vector size: " << v.size() << std::endl;
    };
    f(std::vector{1, 2, 3});
    return 0;
}
