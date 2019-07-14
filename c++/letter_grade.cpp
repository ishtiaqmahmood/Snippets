#include <iostream>

using namespace std;

int main()
{
	int num;
	cout << "Letter Grade Calculator" << endl;
	cout << "Enter Number : ";
	cin >> num;

	if(num > 100 || num < 0){
		cout << "Please enter a valid number" << endl;
	}
	else if(num >= 80){
		cout << "Grade : A+" << endl;
	}
	else if(num >= 70){
		cout << "Grade : A" << endl;
	}
	else if(num >= 60){
		cout << "Grade : A-" << endl;
	}
	else if(num >= 50){
		cout << "Grade : B" << endl;
	}
	else if(num >= 40){
		cout << "Grade : C" << endl;
	}
	else if(num >= 33){
		cout << "Grade : D" << endl;
	}
	else{
		cout << "Grade : Fail" << endl;
	}
}