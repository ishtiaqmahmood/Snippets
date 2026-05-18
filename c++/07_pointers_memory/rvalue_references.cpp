#include <iostream>

void printValue(int& x) { std::cout << "Lvalue: " << x << std::endl; }
void printValue(int&& x) { std::cout << "Rvalue: " << x << std::endl; }

int main() {
    int a = 10;
    printValue(a);
    printValue(20);
    return 0;
}
