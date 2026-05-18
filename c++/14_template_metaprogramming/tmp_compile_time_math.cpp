#include <iostream>

template<int N>
struct Factorial_tmp {
    static constexpr int value = N * Factorial_tmp<N - 1>::value;
};

template<>
struct Factorial_tmp<0> {
    static constexpr int value = 1;
};

int main() {
    std::cout << Factorial_tmp<5>::value << std::endl;
    return 0;
}
