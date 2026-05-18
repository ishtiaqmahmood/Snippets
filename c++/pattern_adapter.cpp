#include <iostream>

struct Target { virtual void request() { std::cout << "Target request\n"; } virtual ~Target() {} };
struct Adaptee { void specificRequest() { std::cout << "Adaptee specificRequest\n"; } };

struct Adapter : Target {
    Adaptee adaptee;
    void request() override { adaptee.specificRequest(); }
};

int main() {
    Adapter a;
    a.request();
    return 0;
}
