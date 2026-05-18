#include <iostream>
#include <vector>
#include <algorithm>

int main() {
    std::vector<int> v = {1, 2, 3, 4, 5, 6};
    std::vector<int> true_part, false_part;
    std::partition_copy(v.begin(), v.end(), std::back_inserter(true_part), std::back_inserter(false_part),
                        [](int n) { return n % 2 == 0; });
    std::cout << "Even: "; for (int x : true_part) std::cout << x << " ";
    std::cout << "\nOdd: "; for (int x : false_part) std::cout << x << " ";
    std::cout << std::endl;
    return 0;
}
