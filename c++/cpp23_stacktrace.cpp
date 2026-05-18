#include <iostream>
#include <version>

#if defined(__cpp_lib_stacktrace)
#include <stacktrace>
#endif

/**
 * C++23 std::stacktrace allows capturing and printing backtraces programmatically.
 * Often requires linking with specific libraries (like -lstdc++_libbacktrace on GCC).
 */

void function_c() {
#if defined(__cpp_lib_stacktrace)
    std::cout << "Current stacktrace:" << std::endl;
    std::cout << std::stacktrace::current() << std::endl;
#else
    std::cout << "std::stacktrace (C++23) is not supported or needs specific flags/libraries." << std::endl;
#endif
}

void function_b() { function_c(); }
void function_a() { function_b(); }

int main() {
    function_a();
    return 0;
}
