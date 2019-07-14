#include <iostream>

using namespace std;

int main()
{
	int num, temp, count = 0;
	cout << "Enter any number : ";
	cin >> num;
	
	temp = num;
	
	while(temp!=0)
	{
		temp = temp / 10;
		count++;
	}
	
	cout << "Number of integer is : " << count << endl;
	
}
	 
