#include <iostream>
#include <vector>
#include <algorithm>
#include <execution>

/**
 * Note: Parallel algorithms require a C++17 compliant compiler and
 * an implementation of the Parallelism TS, often requiring linking with TBB (Thread Building Blocks).
 * For example: g++ -std=c++17 concurrency_parallel_transform.cpp -ltbb
 */

int main() {
    std::vector<int> v = {1, 2, 3, 4, 5};

    std::cout << "Original: ";
    for (int x : v) std::cout << x << " ";
    std::cout << std::endl;

    // std::transform with parallel execution policy
    std::transform(std::execution::par, v.begin(), v.end(), v.begin(), [](int x) {
        return x * x;
    });

    std::cout << "Squared:  ";
    for (int x : v) std::cout << x << " ";
    std::cout << std::endl;

    return 0;
}
