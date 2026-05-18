#include <iostream>
using namespace std;

int x = 10; // global variable

int main()
{
	int x = 50;
	cout << x << endl;
	cout << :: x << endl; // scope resolution operator to use global variable

}