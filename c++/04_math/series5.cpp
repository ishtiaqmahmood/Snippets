#include <iostream>

using namespace std;

int main()
{
	// 1^3 + 2^3 + 3^3 + .......... + n^3
	int i, n, sum = 0;
	cout << "Series : 1^3 + 2^3 + 3^3 + .......... + n^3" << endl;
	cout << "Enter the value of n : ";
	cin >> n;
	
	for(i=1;i<=n;i++){
		sum = sum + i*i*i;
	}
	
	cout << "Sum : " << sum << endl;
}
