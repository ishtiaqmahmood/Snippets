#include <iostream>
#include <vector>

void bubbleSort(std::vector<int>& v) {
    for (size_t i = 0; i < v.size(); ++i) {
        for (size_t j = 0; j < v.size() - i - 1; ++j) {
            if (v[j] > v[j+1]) std::swap(v[j], v[j+1]);
        }
    }
}

int main() {
    std::vector<int> v = {5, 2, 9, 1, 5, 6};
    bubbleSort(v);
    for (int i : v) std::cout << i << " ";
    std::cout << std::endl;
    return 0;
}
