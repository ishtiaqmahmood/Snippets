#include <iostream>

using namespace std;

int main()
{
	int marks[5] = {34,56,76,87,45};

	cout << marks[0] << " ";
	cout << marks[1] << " ";
	cout << marks[2] << " ";
	cout << marks[3] << " ";
	cout << marks[4] << " ";
	cout << endl;

	for (int i = 0; i < 5; i++)
	{
		cout << marks[i] << " ";
	}

	cout << endl;

}