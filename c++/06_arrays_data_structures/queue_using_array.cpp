#include <iostream>

class Queue {
    int arr[100];
    int frontIndex, rearIndex;
public:
    Queue() : frontIndex(0), rearIndex(0) {}
    void enqueue(int x) { arr[rearIndex++] = x; }
    int dequeue() { return arr[frontIndex++]; }
    bool empty() { return frontIndex == rearIndex; }
};

int main() {
    Queue q;
    q.enqueue(1); q.enqueue(2);
    while (!q.empty()) std::cout << q.dequeue() << " ";
    std::cout << std::endl;
    return 0;
}
