#include <iostream>
#include <vector>

void selectionSort(std::vector<int>& v) {
    for (size_t i = 0; i < v.size(); ++i) {
        size_t minIdx = i;
        for (size_t j = i + 1; j < v.size(); ++j) {
            if (v[j] < v[minIdx]) minIdx = j;
        }
        std::swap(v[i], v[minIdx]);
    }
}

int main() {
    std::vector<int> v = {64, 25, 12, 22, 11};
    selectionSort(v);
    for (int i : v) std::cout << i << " ";
    std::cout << std::endl;
    return 0;
}
