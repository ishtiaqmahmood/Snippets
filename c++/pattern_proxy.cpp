#include <iostream>
#include <memory>

struct Subject { virtual void request() = 0; virtual ~Subject() {} };
struct RealSubject : Subject { void request() override { std::cout << "Real request\n"; } };

struct Proxy : Subject {
    std::unique_ptr<RealSubject> realSubject;
    void request() override {
        if (!realSubject) realSubject = std::make_unique<RealSubject>();
        std::cout << "Proxy: Logging request.\n";
        realSubject->request();
    }
};

int main() {
    Proxy p;
    p.request();
    return 0;
}
