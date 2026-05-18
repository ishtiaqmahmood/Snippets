#include <iostream>

using namespace std;

int main()
{
	// 1 * 2 * 3 * ......... * n
	int i, n, sum = 1;
	cout << "Series : 1 * 2 * 3 * ......... * n" << endl;
	cout << "Enter the value of n : ";
	cin >> n;
	
	for(i=1;i<=n;i++){
		sum = sum * i;
	}
	
	cout << "Sum : " << sum << endl;
}
