// 1 + 2 + 3 + ........ + n

#include <iostream>

using namespace std;

int main()
{
	int sum = 0, n;

	cout << "Enter the last number : ";
	cin >> n;

	for (int i = 1; i <= n; i++)
	{
		sum = sum + i;
	}

	cout << "Sum : " << sum << endl;
}