#include <iostream>

class Stack {
    int arr[100];
    int topIndex;
public:
    Stack() : topIndex(-1) {}
    void push(int x) { arr[++topIndex] = x; }
    int pop() { return arr[topIndex--]; }
    bool empty() { return topIndex == -1; }
};

int main() {
    Stack s;
    s.push(1); s.push(2);
    while (!s.empty()) std::cout << s.pop() << " ";
    std::cout << std::endl;
    return 0;
}
