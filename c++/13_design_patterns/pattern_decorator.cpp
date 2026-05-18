#include <iostream>
#include <memory>

struct Component { virtual void op() = 0; virtual ~Component() {} };
struct ConcreteComponent : Component { void op() override { std::cout << "Base\n"; } };

struct Decorator : Component {
    std::unique_ptr<Component> component;
    Decorator(std::unique_ptr<Component> c) : component(std::move(c)) {}
    void op() override { component->op(); }
};

struct ConcreteDecorator : Decorator {
    ConcreteDecorator(std::unique_ptr<Component> c) : Decorator(std::move(c)) {}
    void op() override { Decorator::op(); std::cout << "Decorated\n"; }
};

int main() {
    auto c = std::make_unique<ConcreteDecorator>(std::make_unique<ConcreteComponent>());
    c->op();
    return 0;
}
