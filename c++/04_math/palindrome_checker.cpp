#include <iostream>

using namespace std;

int main()
{
	int num, temp, r, sum = 0;
	cout << "Palindrome Checker" << endl;
	cout << "Enter any number : ";
	cin >> num;
	
	temp = num;
	
	while(temp!=0)
	{
		r = temp % 10;
		sum = (sum * 10) + r;
		temp = temp / 10;	
	}
	
	if(num == sum){
		cout << "Palindrome";	
	}
	else{
		cout << "Not Palindrome";
	}
	
}