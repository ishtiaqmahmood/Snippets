#include <iostream>

using namespace std;

int main()
{
	int a;
	float f;
	double d;
	char ch;
	char name[20];
	
	int c = sizeof(a);
	cout << c << endl;
	
	// comma operator
	
	int x, y, sum;
	sum = (x=20,y=50,sum=x+y);
	cout << sum;
	
}
	