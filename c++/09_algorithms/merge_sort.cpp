#include <iostream>
#include <vector>

void merge(std::vector<int>& v, int l, int m, int r) {
    int n1 = m - l + 1;
    int n2 = r - m;
    std::vector<int> L(n1), R(n2);
    for (int i = 0; i < n1; ++i) L[i] = v[l + i];
    for (int j = 0; j < n2; ++j) R[j] = v[m + 1 + j];
    int i = 0, j = 0, k = l;
    while (i < n1 && j < n2) {
        if (L[i] <= R[j]) v[k++] = L[i++];
        else v[k++] = R[j++];
    }
    while (i < n1) v[k++] = L[i++];
    while (j < n2) v[k++] = R[j++];
}

void mergeSort(std::vector<int>& v, int l, int r) {
    if (l < r) {
        int m = l + (r - l) / 2;
        mergeSort(v, l, m);
        mergeSort(v, m + 1, r);
        merge(v, l, m, r);
    }
}

int main() {
    std::vector<int> v = {38, 27, 43, 3, 9, 82, 10};
    mergeSort(v, 0, v.size() - 1);
    for (int i : v) std::cout << i << " ";
    std::cout << std::endl;
    return 0;
}
