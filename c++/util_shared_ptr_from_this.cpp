#include <iostream>
#include <memory>

struct S_sptr : std::enable_shared_from_this<S_sptr> {
    std::shared_ptr<S_sptr> get_ptr() { return shared_from_this(); }
};

int main() {
    auto s1 = std::make_shared<S_sptr>();
    auto s2 = s1->get_ptr();
    std::cout << s1.use_count() << std::endl;
    return 0;
}
