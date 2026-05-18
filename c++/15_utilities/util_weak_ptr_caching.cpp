#include <iostream>
#include <memory>
#include <map>

std::map<int, std::weak_ptr<int>> cache_wp;

std::shared_ptr<int> get_data_wp(int id) {
    if (auto ptr = cache_wp[id].lock()) return ptr;
    auto ptr = std::make_shared<int>(id);
    cache_wp[id] = ptr;
    return ptr;
}

int main() {
    auto p1 = get_data_wp(1);
    auto p2 = get_data_wp(1);
    std::cout << (p1 == p2) << std::endl;
    return 0;
}
