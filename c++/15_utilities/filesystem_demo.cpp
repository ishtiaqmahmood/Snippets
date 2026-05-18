#include <iostream>
#include <filesystem>

namespace fs = std::filesystem;

int main() {
    fs::path p = ".";
    std::cout << "Current path: " << fs::absolute(p) << std::endl;
    return 0;
}
