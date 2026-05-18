#include <iostream>
#include <compare>

struct Point {
    int x, y;
    auto operator<=>(const Point&) const = default;
};

int main() {
    Point p1{1, 2}, p2{1, 3};
    if (p1 < p2) std::cout << "p1 is less than p2" << std::endl;
    if (p1 != p2) std::cout << "p1 is not equal to p2" << std::endl;
    return 0;
}
