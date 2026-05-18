#include <iostream>
#include <memory>

struct Prototype {
    virtual std::unique_ptr<Prototype> clone() = 0;
    virtual void show() = 0;
    virtual ~Prototype() {}
};

struct ConcretePrototype : Prototype {
    int value;
    ConcretePrototype(int v) : value(v) {}
    std::unique_ptr<Prototype> clone() override { return std::make_unique<ConcretePrototype>(*this); }
    void show() override { std::cout << "Value: " << value << std::endl; }
};

int main() {
    ConcretePrototype p1(10);
    auto p2 = p1.clone();
    p2->show();
    return 0;
}
