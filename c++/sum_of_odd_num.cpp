// 1 + 3 + 5 + ........ + n

#include <iostream>

using namespace std;

int main()
{
	int sum = 0, n;

	cout << "Enter the last number : ";
	cin >> n;

	for (int i = 1; i <= n; i = i + 2)
	{
		sum = sum + i;
	}

	cout << "Sum : " << sum << endl;
}