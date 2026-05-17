#include <iostream>
#include <memory>

class Product {
public:
    virtual ~Product() = default;
    virtual void use() = 0;
};

class ConcreteProduct : public Product {
public:
    void use() override { std::cout << "Using Product" << std::endl; }
};

class Factory {
public:
    static std::unique_ptr<Product> createProduct() { return std::make_unique<ConcreteProduct>(); }
};

int main() {
    auto p = Factory::createProduct();
    p->use();
    return 0;
}
