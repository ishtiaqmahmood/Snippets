﻿#include <iostream>

using namespace std;

int main()
{
	int num1, num2;
	
	cout << "Enter first integer : ";
	cin >> num1;
	cout << "Enter second integer : ";
	cin >> num2;
	
	int sum = num1 + num2;
	cout << "Sum is : " <<sum;
	cout << endl;
	
	int sub = num1 - num2;
	cout << "Subtraction is : " <<sub;
	cout << endl;
	
	int mul = num1 * num2;
	cout << "Multiplication is : " <<mul;
	cout << endl;
	
	double div = (float) num1 / num2;
	cout << "Division is : " <<div;
	cout << endl;
	
	int rem = num1 % num2;
	cout << "Reminder is : " <<sum;
	cout << endl;
	
}
