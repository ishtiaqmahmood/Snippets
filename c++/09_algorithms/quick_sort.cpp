#include <iostream>
#include <vector>

int partition(std::vector<int>& v, int low, int high) {
    int pivot = v[high];
    int i = low - 1;
    for (int j = low; j < high; ++j) {
        if (v[j] < pivot) {
            i++;
            std::swap(v[i], v[j]);
        }
    }
    std::swap(v[i+1], v[high]);
    return i + 1;
}

void quickSort(std::vector<int>& v, int low, int high) {
    if (low < high) {
        int pi = partition(v, low, high);
        quickSort(v, low, pi - 1);
        quickSort(v, pi + 1, high);
    }
}

int main() {
    std::vector<int> v = {10, 7, 8, 9, 1, 5};
    quickSort(v, 0, v.size() - 1);
    for (int i : v) std::cout << i << " ";
    std::cout << std::endl;
    return 0;
}
