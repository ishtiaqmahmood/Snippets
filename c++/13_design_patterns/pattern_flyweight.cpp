#include <iostream>
#include <map>
#include <string>
#include <memory>

struct Flyweight {
    std::string intrinsicState;
    Flyweight(std::string s) : intrinsicState(s) {}
    void operation(int extrinsicState) { std::cout << intrinsicState << " " << extrinsicState << std::endl; }
};

struct FlyweightFactory {
    std::map<std::string, std::shared_ptr<Flyweight>> flyweights;
    std::shared_ptr<Flyweight> getFlyweight(std::string key) {
        if (!flyweights.count(key)) flyweights[key] = std::make_shared<Flyweight>(key);
        return flyweights[key];
    }
};

int main() {
    FlyweightFactory factory;
    factory.getFlyweight("A")->operation(1);
    factory.getFlyweight("A")->operation(2);
    return 0;
}
