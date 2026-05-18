#include <iostream>
#include <memory>

struct Button { virtual void paint() = 0; virtual ~Button() {} };
struct WinButton : Button { void paint() override { std::cout << "WinButton\n"; } };
struct MacButton : Button { void paint() override { std::cout << "MacButton\n"; } };

struct GUIFactory { virtual std::unique_ptr<Button> createButton() = 0; virtual ~GUIFactory() {} };
struct WinFactory : GUIFactory { std::unique_ptr<Button> createButton() override { return std::make_unique<WinButton>(); } };
struct MacFactory : GUIFactory { std::unique_ptr<Button> createButton() override { return std::make_unique<MacButton>(); } };

int main() {
    std::unique_ptr<GUIFactory> factory = std::make_unique<WinFactory>();
    auto btn = factory->createButton();
    btn->paint();
    return 0;
}
