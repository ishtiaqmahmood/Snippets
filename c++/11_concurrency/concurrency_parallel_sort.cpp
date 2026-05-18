#include <iostream>
#include <vector>
#include <algorithm>
#include <execution>

/**
 * Note: Parallel algorithms require a C++17 compliant compiler and
 * an implementation of the Parallelism TS, often requiring linking with TBB (Thread Building Blocks).
 * For example: g++ -std=c++17 concurrency_parallel_sort.cpp -ltbb
 */

int main() {
    std::vector<int> v = {5, 2, 8, 1, 9, 4, 3, 7, 6};

    std::cout << "Original vector: ";
    for (int x : v) std::cout << x << " ";
    std::cout << std::endl;

    // Use execution::par to request parallel execution
    // Fallback to sequential if TBB is not available at runtime or if implementation chooses.
    std::sort(std::execution::par, v.begin(), v.end());

    std::cout << "Sorted vector:   ";
    for (int x : v) std::cout << x << " ";
    std::cout << std::endl;

    return 0;
}
