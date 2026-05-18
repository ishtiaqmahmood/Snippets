#include <iostream>

struct SubsystemA { void opA() { std::cout << "SubA\n"; } };
struct SubsystemB { void opB() { std::cout << "SubB\n"; } };

struct Facade {
    SubsystemA a;
    SubsystemB b;
    void operation() { a.opA(); b.opB(); }
};

int main() {
    Facade f;
    f.operation();
    return 0;
}
