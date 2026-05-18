#include <iostream>
#include <memory>

class Widget_P {
    class Impl;
    std::unique_ptr<Impl> pImpl;
public:
    Widget_P();
    ~Widget_P();
    void draw();
};

class Widget_P::Impl {
public:
    void draw() { std::cout << "Drawing widget\n"; }
};

Widget_P::Widget_P() : pImpl(std::make_unique<Impl>()) {}
Widget_P::~Widget_P() = default;
void Widget_P::draw() { pImpl->draw(); }

int main() {
    Widget_P w;
    w.draw();
    return 0;
}
