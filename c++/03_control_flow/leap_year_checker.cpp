#include <iostream>

using namespace std;

int main()
{
	int year;


	cout << "Enter Any Year : ";
	cin >> year;

	if(year % 4 == 0 && year % 100 != 0){
		cout << "Leap Year" << endl;
	}
	else if(year % 400 == 0){
		cout << "Leap Year" << endl;
	}
	else{
		cout << "Not Leap Year" << endl;
	}
}