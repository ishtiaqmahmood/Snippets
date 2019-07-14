#include <iostream>

using namespace std;

int main()
{
	int num, temp, rem, sum = 0, fact;
	cout << "Enter any number : ";
	cin >> num;
	
	temp = num;
	
	while(temp!=0)
	{
		rem = temp % 10;
		
		fact = 1;
		for(int i=1;i<=rem;i++){
			fact = fact * i;
		}
		
		sum = sum + fact;
		temp = temp / 10;	
	}
	
	if(num == sum){
		cout << "Strong Number." << endl;
	}
	else{
		cout << "Not A Strong Number." << endl;
	}
	
}
	 
