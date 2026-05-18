#include <iostream>
#include <vector>

struct Iterator {
    virtual int next() = 0;
    virtual bool hasNext() = 0;
    virtual ~Iterator() {}
};

struct ConcreteIterator : Iterator {
    std::vector<int> data;
    size_t pos = 0;
    ConcreteIterator(std::vector<int> d) : data(d) {}
    int next() override { return data[pos++]; }
    bool hasNext() override { return pos < data.size(); }
};

int main() {
    ConcreteIterator it({1, 2, 3});
    while (it.hasNext()) std::cout << it.next() << " ";
    std::cout << std::endl;
    return 0;
}
