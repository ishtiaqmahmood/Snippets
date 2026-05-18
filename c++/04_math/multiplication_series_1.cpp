#include <iostream>

using namespace std;

int main()
{
	// 1.2 + 2.3 + 3.4 + .......... + n1.n2
	int n1, n2, sum = 0, a = 1, b = 2;
	cout << "Series : 1.2 + 2.3 + 3.4 + .......... + n1.n2" << endl;
	cout << "Enter the value of n1 & n2 : ";
	cin >> n1 >> n2;
	
	while(a<=n1 && b<=n2){
		sum = sum + a*b;
		a++;
		b++;
	}
	
	cout << "Sum : " << sum << endl;
}