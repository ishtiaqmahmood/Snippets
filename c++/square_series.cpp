#include <iostream>

using namespace std;

int main()
{
	// 1 + 1/2 + 1/3 + .......... + 1/n
	double i, n, sum = 0;
	cout << "Series : 1 + 1/2 + 1/3 + .......... + 1/n" << endl;
	cout << "Enter the value of n : ";
	cin >> n;
	
	for(i=1;i<=n;i++){
		sum = sum + (1/i);
	}
	
	cout << "Sum : " << sum << endl;
}
