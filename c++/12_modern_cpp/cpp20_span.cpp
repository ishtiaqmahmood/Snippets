#include <iostream>
#include <vector>
#include <span>

void print_span(std::span<int> s) {
    for (int x : s) std::cout << x << " ";
    std::cout << std::endl;
}

int main() {
    int arr[] = {1, 2, 3};
    std::vector<int> vec = {4, 5, 6};
    print_span(arr);
    print_span(vec);
    return 0;
}
