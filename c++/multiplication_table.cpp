#include <iostream>

using namespace std;

int main()
{
	int num,m;
	cout << "Multiplication Table" << endl;
	cout << "Base : ";
	cin >> num;
	cout << "level : ";
	cin >> m;

	for(int i=1; i<=m; i++ ){
		cout << num << " * " << i << " = " << (num*i) << endl;
	}

}
