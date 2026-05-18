#include <iostream>
#include <version>

#if defined(__cpp_lib_flat_map)
#include <flat_map>
#endif

/**
 * C++23 std::flat_map is a container adaptor that provides an associative container
 * interface with underlying storage in sorted contiguous memory.
 */

int main() {
#if defined(__cpp_lib_flat_map)
    std::flat_map<int, std::string> map;
    map[1] = "C++";
    map[2] = "Standard";
    map[3] = "Library";

    for (const auto& [key, value] : map) {
        std::cout << key << ": " << value << std::endl;
    }
#else
    std::cout << "std::flat_map (C++23) is not supported yet." << std::endl;
#endif
    return 0;
}
