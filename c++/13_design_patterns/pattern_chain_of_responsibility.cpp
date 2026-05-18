#include <iostream>
#include <memory>

struct Handler {
    std::shared_ptr<Handler> next;
    virtual void handle(int request) { if (next) next->handle(request); }
    virtual ~Handler() {}
};

struct ConcreteHandler1 : Handler {
    void handle(int request) override {
        if (request < 10) std::cout << "H1 handled " << request << std::endl;
        else Handler::handle(request);
    }
};

int main() {
    auto h1 = std::make_shared<ConcreteHandler1>();
    h1->handle(5);
    h1->handle(15);
    return 0;
}
