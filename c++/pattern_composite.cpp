#include <iostream>
#include <vector>
#include <memory>

struct Component { virtual void operation() = 0; virtual ~Component() {} };
struct Leaf : Component { void operation() override { std::cout << "Leaf\n"; } };
struct Composite : Component {
    std::vector<std::shared_ptr<Component>> children;
    void add(std::shared_ptr<Component> c) { children.push_back(c); }
    void operation() override {
        std::cout << "Composite:\n";
        for (auto& c : children) c->operation();
    }
};

int main() {
    auto comp = std::make_shared<Composite>();
    comp->add(std::make_shared<Leaf>());
    comp->add(std::make_shared<Leaf>());
    comp->operation();
    return 0;
}
