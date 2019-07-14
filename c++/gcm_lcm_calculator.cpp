#include <iostream>

using namespace std;

int main()
{
	int n1, n2, num1, num2;
	
	cout << "Gcd & Lcd calculator" << endl;
	cout << "Enter two number separated by a space : ";
	cin >> num1 >> num2;
	
	n1 = num1;
	n2 = num2;
	
	while(n2 != 0){
		int rem = n1 % n2;
		n1 = n2;
		n2 = rem;
	}
	
	int gcd = n1;
	int lcm = (num1 * num2) / gcd;
	
	cout << "Greatest common divisor : " << gcd << endl;
	cout << "Lowest common multiple : " << lcm << endl;
	
}
