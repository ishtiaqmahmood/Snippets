#include <iostream>

using namespace std;

int main()
{
	// 1^2 + 2^2 + 3^2 + .......... + n^2
	int i, n, sum = 0;
	cout << "Series : 1^2 + 2^2 + 3^2 + .......... + n^2" << endl;
	cout << "Enter the value of n : ";
	cin >> n;
	
	for(i=1;i<=n;i++){
		sum = sum + i*i;
	}
	
	cout << "Sum : " << sum << endl;
}
