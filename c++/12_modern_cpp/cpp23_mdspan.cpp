#include <iostream>
#include <vector>
#include <version>

#if defined(__cpp_lib_mdspan)
#include <mdspan>
#endif

/**
 * C++23 std::mdspan provides a non-owning multidimensional view over a contiguous sequence.
 */

int main() {
#if defined(__cpp_lib_mdspan)
    std::vector<int> data(12);
    for (int i = 0; i < 12; ++i) data[i] = i;

    // View data as a 3x4 2D array
    std::mdspan m{data.data(), 3, 4};

    std::cout << "3x4 mdspan content:" << std::endl;
    for (std::size_t i = 0; i < m.extent(0); ++i) {
        for (std::size_t j = 0; j < m.extent(1); ++j) {
            std::cout << m[i, j] << "\t";
        }
        std::cout << std::endl;
    }
#else
    std::cout << "std::mdspan (C++23) is not supported by this compiler version yet." << std::endl;
#endif
    return 0;
}
