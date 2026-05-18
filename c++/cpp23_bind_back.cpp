#include <iostream>
#include <functional>
#include <version>

/**
 * C++23 std::bind_back allows binding arguments to the end of a function call.
 */

int multiply(int a, int b) { return a * b; }

int main() {
#if defined(__cpp_lib_bind_back)
    auto multiplyBy5 = std::bind_back(multiply, 5);
    std::cout << "10 * 5 = " << multiplyBy5(10) << std::endl;
#else
    std::cout << "std::bind_back (C++23) is not supported yet." << std::endl;
#endif
    return 0;
}
