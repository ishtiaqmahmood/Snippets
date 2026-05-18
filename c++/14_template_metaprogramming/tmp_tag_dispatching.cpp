#include <iostream>
#include <type_traits>

void func_impl(int, std::true_type) { std::cout << "Integral\n"; }
void func_impl(double, std::false_type) { std::cout << "Not Integral\n"; }

template<typename T>
void func_tag(T val) { func_impl(val, std::is_integral<T>{}); }

int main() {
    func_tag(10);
    func_tag(10.5);
    return 0;
}
