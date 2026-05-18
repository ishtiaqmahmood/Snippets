#include <iostream>

using namespace std;

int main()
{
	int num;

	cout << "Even/Odd checker" << endl;
	cout << "Enter a number : ";
	cin >> num;

	if(num % 2 == 0){
		cout << "Even"  << endl;
	}
	else if(num % 2 != 0){
		cout << "Odd" << endl;
	}
	else{
		cout << "Please enter an integer." << endl;
	}

}