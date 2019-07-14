#include <iostream>

using namespace std;

int main()
{
	int num, temp, r, sum = 0;
	cout << "Enter any number : ";
	cin >> num;
	
	temp = num;
	
	while(temp!=0)
	{
		r = temp % 10;
		sum = sum + (r*r*r);
		temp = temp / 10;	
	}
	
	if(num == sum){
		cout << "Armstrong Number." << endl;
	}
	else{
		cout << "Not An Armstrong Number."<< endl;
	}
	
}
	 
