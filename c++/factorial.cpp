#include <iostream>

using namespace std;

int main()
{
	int i, num;
	int fact = 1;

	cout << "Factorial Calculator" << endl;
	cout << "Enter A number: ";
	cin >> num;

	for (int i = 1; i <= num; i++)
	{
		fact = fact * i;
	}

	cout << "Factorial Number: " << fact << endl;

}