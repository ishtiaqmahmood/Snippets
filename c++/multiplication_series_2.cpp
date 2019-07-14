#include <iostream>

using namespace std;

int main()
{
	// 1.3 + 2.5 + 3.7 + .......... + n1.n2
	int n1, n2, sum = 0, a = 1, b = 3;
	cout << "Series : 1.3 + 2.5 + 3.7 + .......... + n1.n2" << endl;
	cout << "Enter the value of n1 & n2 : ";
	cin >> n1 >> n2;
	
	while(a<=n1 && b<=n2){
		sum = sum + a*b;
		a++;
		b = b + 2;
	}
	
	cout << "Sum : " << sum << endl;
}
