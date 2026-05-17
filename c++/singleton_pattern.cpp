#include <iostream>

class Singleton {
    static Singleton* instance;
    Singleton() {}
public:
    static Singleton* getInstance() {
        if (!instance) instance = new Singleton();
        return instance;
    }
    void show() { std::cout << "Singleton Instance" << std::endl; }
};

Singleton* Singleton::instance = nullptr;

int main() {
    Singleton::getInstance()->show();
    return 0;
}
