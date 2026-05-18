#include <iostream>

template<typename Derived>
struct Base_CRTP {
    void interface() { static_cast<Derived*>(this)->implementation(); }
};

struct Derived_CRTP : Base_CRTP<Derived_CRTP> {
    void implementation() { std::cout << "Derived implementation\n"; }
};

int main() {
    Derived_CRTP d;
    d.interface();
    return 0;
}
