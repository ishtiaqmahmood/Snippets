#include <iostream>
#include <vector>
#include <algorithm>
#include <execution>

/**
 * Demonstration of different execution policies introduced in C++17.
 * Requires linking with an execution policy provider like TBB.
 */

int main() {
    std::vector<int> v(100, 1);

    // 1. std::execution::seq - Sequential execution
    std::for_each(std::execution::seq, v.begin(), v.end(), [](int& x) { x++; });

    // 2. std::execution::par - Parallel execution
    std::for_each(std::execution::par, v.begin(), v.end(), [](int& x) { x++; });

    // 3. std::execution::par_unseq - Parallel and unsequenced (SIMD + Threads)
    std::for_each(std::execution::par_unseq, v.begin(), v.end(), [](int& x) { x++; });

    std::cout << "First element after 3 increments: " << v[0] << " (Expected 4)" << std::endl;

    return 0;
}
