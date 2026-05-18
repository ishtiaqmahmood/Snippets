#include <iostream>
#include <memory>

struct Implementor { virtual void op() = 0; virtual ~Implementor() {} };
struct ConcreteImplA : Implementor { void op() override { std::cout << "ImplA\n"; } };

struct Abstraction {
    std::unique_ptr<Implementor> impl;
    Abstraction(std::unique_ptr<Implementor> i) : impl(std::move(i)) {}
    virtual void operation() { impl->op(); }
    virtual ~Abstraction() {}
};

int main() {
    Abstraction abs(std::make_unique<ConcreteImplA>());
    abs.operation();
    return 0;
}
