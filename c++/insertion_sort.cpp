#include <iostream>
#include <vector>

void insertionSort(std::vector<int>& v) {
    for (size_t i = 1; i < v.size(); ++i) {
        int key = v[i];
        int j = i - 1;
        while (j >= 0 && v[j] > key) {
            v[j+1] = v[j];
            j--;
        }
        v[j+1] = key;
    }
}

int main() {
    std::vector<int> v = {12, 11, 13, 5, 6};
    insertionSort(v);
    for (int i : v) std::cout << i << " ";
    std::cout << std::endl;
    return 0;
}
