#include <iostream>
#include <vector>

class Observer {
public:
    virtual ~Observer() = default;
    virtual void update() = 0;
};

class Subject {
    std::vector<Observer*> observers;
public:
    void attach(Observer* o) { observers.push_back(o); }
    void notify() { for (auto o : observers) o->update(); }
};

class ConcreteObserver : public Observer {
public:
    void update() override { std::cout << "Observer Updated" << std::endl; }
};

int main() {
    Subject s;
    ConcreteObserver o1;
    s.attach(&o1);
    s.notify();
    return 0;
}
