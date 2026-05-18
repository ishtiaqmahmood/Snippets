#include <iostream>
#include <memory>

struct Command { virtual void execute() = 0; virtual ~Command() {} };
struct Receiver { void action() { std::cout << "Action performed\n"; } };
struct ConcreteCommand : Command {
    Receiver* receiver;
    ConcreteCommand(Receiver* r) : receiver(r) {}
    void execute() override { receiver->action(); }
};

int main() {
    Receiver r;
    ConcreteCommand cmd(&r);
    cmd.execute();
    return 0;
}
