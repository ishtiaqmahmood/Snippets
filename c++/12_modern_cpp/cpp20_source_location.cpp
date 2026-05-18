#include <iostream>
#include <source_location>

void log(std::string_view message, const std::source_location& loc = std::source_location::current()) {
    std::cout << loc.file_name() << ":" << loc.line() << " " << message << std::endl;
}

int main() {
    log("Hello from main");
    return 0;
}
