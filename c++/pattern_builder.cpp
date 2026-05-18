#include <iostream>
#include <string>

struct Product {
    std::string partA, partB;
    void show() { std::cout << partA << " " << partB << std::endl; }
};

struct Builder {
    Product product;
    void buildPartA() { product.partA = "PartA"; }
    void buildPartB() { product.partB = "PartB"; }
    Product getResult() { return product; }
};

int main() {
    Builder builder;
    builder.buildPartA();
    builder.buildPartB();
    Product p = builder.getResult();
    p.show();
    return 0;
}
