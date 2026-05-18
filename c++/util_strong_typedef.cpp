#include <iostream>

struct Seconds_ST {
    explicit Seconds_ST(int v) : value(v) {}
    int value;
};

void wait_st(Seconds_ST s) { std::cout << "Waiting for " << s.value << "s\n"; }

int main() {
    wait_st(Seconds_ST(5));
    return 0;
}
