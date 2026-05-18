#include <iostream>
#include <vector>

int binarySearch(const std::vector<int>& v, int low, int high, int x) {
    if (high >= low) {
        int mid = low + (high - low) / 2;
        if (v[mid] == x) return mid;
        if (v[mid] > x) return binarySearch(v, low, mid - 1, x);
        return binarySearch(v, mid + 1, high, x);
    }
    return -1;
}

int main() {
    std::vector<int> v = {2, 3, 4, 10, 40};
    int result = binarySearch(v, 0, v.size() - 1, 10);
    if (result != -1) std::cout << "Element found at index " << result << std::endl;
    return 0;
}
