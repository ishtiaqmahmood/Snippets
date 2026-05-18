#include <iostream>
#include <vector>
#include <ranges>
#include <version>

/**
 * C++23 introduced std::views::chunk which splits a range into chunks of specified size.
 */

int main() {
#if defined(__cpp_lib_ranges_chunk)
    std::vector<int> v = {1, 2, 3, 4, 5, 6, 7};

    std::cout << "Chunks of 3:" << std::endl;
    for (auto chunk : v | std::views::chunk(3)) {
        std::cout << "[ ";
        for (int x : chunk) std::cout << x << " ";
        std::cout << "]" << std::endl;
    }
#else
    std::cout << "std::views::chunk (C++23) is not supported yet." << std::endl;
#endif
    return 0;
}
