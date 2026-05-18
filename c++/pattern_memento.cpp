#include <iostream>
#include <string>

struct Memento {
    std::string state;
    Memento(std::string s) : state(s) {}
};

struct Originator {
    std::string state;
    Memento save() { return Memento(state); }
    void restore(Memento m) { state = m.state; }
};

int main() {
    Originator o;
    o.state = "On";
    Memento m = o.save();
    o.state = "Off";
    o.restore(m);
    std::cout << "State: " << o.state << std::endl;
    return 0;
}
