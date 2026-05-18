#include <iostream>
#include <cmath>

int main() {
    float a = 0.0f, b = 10.0f;
    std::cout << "Lerp: " << std::lerp(a, b, 0.5f) << std::endl;
    return 0;
}
