#include <iostream>
#include <string_view>

void print_sv(std::string_view sv) {
    std::cout << sv << std::endl;
}

int main() {
    std::string s = "Hello World";
    print_sv(s);
    print_sv("Literal");
    return 0;
}
