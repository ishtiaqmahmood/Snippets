#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
	float num1, num2;
	
	cout << "Enter first integer : ";
	cin >> num1;
	cout << "Enter second integer : ";
	cin >> num2;
	
	cout << showpoint; // show floating point
	cout << fixed; // show fixed point after decimal point
	cout << setprecision(2); // set floating point number
	
	float sum = num1 + num2;
	cout << setw(20) << "Sum is : " <<sum; // setw() - setwidth
	cout << endl;
	
	//cout << noshowpoint; // don't show floating point
	float sub = num1 - num2;
	cout << setw(20) << "Subtraction is : " <<sub;
	cout << endl;
	
	float mul = num1 * num2;
	cout << setw(20) << "Multiplication is : " <<mul;
	cout << endl;
	
	double div = (float) num1 / num2; // type casting
	cout << setw(20) << "Division is : " <<div;
	cout << endl;
	
	//int rem = (int) num1 % (int) num2; // type casting
	//cout << "Reminder is : " <<sum;
	//cout << endl;
	
}
