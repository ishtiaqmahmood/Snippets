#include <iostream>
using namespace std;

void display(int num) // formal parameter
{
	num = 20;
}

void display1(int *num)
{
	*num = 20;
}

int main()
{
	int x = 10;
	cout << "Before calling the function x = " << x << endl;

	display(x); // actual parameter
	cout << "After calling the function x = " << x << endl;

	display1(&x);
	cout << "After calling the function x = " << x << endl;
}

