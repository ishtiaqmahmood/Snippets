#include <iostream>
struct S_lct {
    int x = 10;
    auto get_lambda() {
        return [*this] { std::cout << x << std::endl; };
    }
};
int main() {
    S_lct s;
    auto f = s.get_lambda();
    f();
    return 0;
}
