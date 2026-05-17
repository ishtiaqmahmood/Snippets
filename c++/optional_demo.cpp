#include <iostream>
#include <optional>

std::optional<int> getValue(bool get) {
    if (get) return 10;
    return std::nullopt;
}

int main() {
    auto val = getValue(true);
    if (val) std::cout << "Value: " << *val << std::endl;
    return 0;
}
