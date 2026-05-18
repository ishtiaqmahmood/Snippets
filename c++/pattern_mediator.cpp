#include <iostream>
#include <string>
#include <vector>

struct Colleague;
struct Mediator { virtual void send(std::string msg, Colleague* c) = 0; virtual ~Mediator() {} };

struct Colleague {
    Mediator* mediator;
    Colleague(Mediator* m) : mediator(m) {}
};

struct ConcreteColleague : Colleague {
    using Colleague::Colleague;
    void send(std::string msg) { mediator->send(msg, this); }
    void notify(std::string msg) { std::cout << "Received: " << msg << std::endl; }
};

struct ConcreteMediator : Mediator {
    ConcreteColleague* c1 = nullptr, *c2 = nullptr;
    void send(std::string msg, Colleague* c) override {
        if (c == c1) c2->notify(msg);
        else if (c == c2) c1->notify(msg);
    }
};

int main() {
    ConcreteMediator m;
    ConcreteColleague c1(&m), c2(&m);
    m.c1 = &c1; m.c2 = &c2;
    c1.send("Hello from C1");
    return 0;
}
