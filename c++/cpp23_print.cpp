#include <iostream>
#include <version>

#if defined(__cpp_lib_print)
#include <print>
#endif

/**
 * C++23 introduced std::print and std::println for better formatted output.
 * If the compiler supports it, this snippet demonstrates their use.
 */

int main() {
#if defined(__cpp_lib_print)
    std::print("Hello, {}! C++23 print is supported.\n", "World");
    std::println("This is a line with a newline at the end.");
#else
    std::cout << "std::print (C++23) is not supported by this compiler/library version yet." << std::endl;
    std::cout << "It provides a more efficient and cleaner alternative to std::cout with <format> integration." << std::endl;
#endif
    return 0;
}
