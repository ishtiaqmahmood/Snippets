#include <iostream>
#include <vector>

template <class T>
struct SimpleAlloc {
    typedef T value_type;
    SimpleAlloc() = default;
    template <class U> SimpleAlloc(const SimpleAlloc<U>&) {}
    T* allocate(std::size_t n) {
        std::cout << "Allocating " << n << " elements\n";
        return static_cast<T*>(::operator new(n * sizeof(T)));
    }
    void deallocate(T* p, std::size_t n) {
        std::cout << "Deallocating\n";
        ::operator delete(p);
    }
};

int main() {
    std::vector<int, SimpleAlloc<int>> v;
    v.push_back(42);
    return 0;
}
