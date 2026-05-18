#include <iostream>
#include <vector>
#include <ranges>
#include <version>

/**
 * C++23 introduced std::views::slide which provides a sliding window view over a range.
 */

int main() {
#if defined(__cpp_lib_ranges_slide)
    std::vector<int> v = {1, 2, 3, 4, 5};

    std::cout << "Sliding window of size 3:" << std::endl;
    for (auto window : v | std::views::slide(3)) {
        std::cout << "[ ";
        for (int x : window) std::cout << x << " ";
        std::cout << "]" << std::endl;
    }
#else
    std::cout << "std::views::slide (C++23) is not supported yet." << std::endl;
#endif
    return 0;
}
