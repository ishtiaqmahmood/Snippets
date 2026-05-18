#include <iostream>
#include <map>
#include <string>

int main() {
    std::map<int, std::string> m = {{1, "one"}, {2, "two"}};
    for (auto const& [key, value] : m) {
        std::cout << key << ": " << value << std::endl;
    }
    return 0;
}
