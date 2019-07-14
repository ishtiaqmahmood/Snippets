#include <iostream>
#include <string.h>
#include <stdio.h>
using namespace std;

int main()
{
	char name[20];

	cout << "Enter your name : ";
	fgets (name, 20, stdin);

	cout << " Wellcome " << name;
}