#include <iostream>

using namespace std;

int main()
{
	// 1.3.5 + 2.5.7 + 3.7.9 + .......... + n1.n2.n3
	int n1, n2, n3, sum = 0, a = 1, b = 3, c = 5;
	cout << "Series : 1.3.5 + 2.5.7 + 3.5.9 + .......... + n1.n2.n3" << endl;
	cout << "Enter the value of n1, n2 & n3 : ";
	cin >> n1 >> n2 >> n3;
	
	while(a<=n1 && b<=n2 && c <= n3){
		sum = sum + a*b*c;
		a++;
		b = b + 2;
		c = c + 2;
	}
	
	cout << "Sum : " << sum << endl;
}
