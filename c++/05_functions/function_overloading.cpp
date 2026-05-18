#include <iostream>

using namespace std;

void sum(int x, int y){
	int add = x + y;
	cout << add << endl;
}

void sum(int x, int y, int z){
	int add = x + y + z;
	cout << add << endl;
}


int main()
{
	int m,n,o;
	cout << "Enter two integer: ";
	cin >> m >> n;
	sum(m,n);

	cout << "Enter three integer: ";
	cin >> m >> n >> o;
	sum(m,n,o);

}