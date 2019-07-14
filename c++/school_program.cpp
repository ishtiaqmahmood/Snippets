#include <iostream>

using namespace std;

int main()
{
	int n, sum = 0;

	cout << "Enter the number of students : ";
	cin >> n;

	int students[n];

	//input
	for (int i = 0; i < n; ++i)
	{
		cout << "Marks for student " << i+1 << " = ";
		cin >> students[i];
		sum = sum + students[i];
	}

	cout << "Tolal marks : " << sum << endl;

	float avg = sum / (int)n;

	cout << "Average Number : " << avg << endl;

	// maximum and minimum

	int max = students[0];
	int min = students[0];

	for (int i = 0; i < n; i++)
	{
		if(max < students[i]){
			max = students[i];
		}
		if(min > students[i]){
			min = students[i];
		}
	}

	cout << "Maximun number is : " << max << endl;
	cout << "Minimun number is : " << min << endl;


}