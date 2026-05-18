#include <iostream>
#include <optional>
#include <string>
#include <version>

/**
 * C++23 added monadic operations to std::optional: and_then, transform, or_else.
 */

int main() {
#if defined(__cpp_lib_optional_monadic)
    std::optional<int> opt = 42;

    auto result = opt.and_then([](int i) { return std::optional{std::to_string(i)}; })
                     .transform([](std::string s) { return s + " points"; });

    if (result) {
        std::cout << "Result: " << *result << std::endl;
    }
#else
    std::cout << "std::optional monadic operations (C++23) are not supported yet." << std::endl;
    if (std::optional<int> opt = 42; opt) {
        std::cout << "Standard optional value: " << *opt << std::endl;
    }
#endif
    return 0;
}
