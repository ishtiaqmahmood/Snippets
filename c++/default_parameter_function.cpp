#include <iostream>

using namespace std;

void display(int a = 10, int b = 10)
{
    cout << a << endl;
    cout << b << endl;
}


int main()
{
    display();
    display(15);
}

