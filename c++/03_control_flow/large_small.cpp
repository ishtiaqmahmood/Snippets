#include <iostream>

using namespace std;

int main()
{
	int num1, num2;

	cout << "Large-Small number detector" << endl;
	cout << "Please enter two number with separated by space : ";
	cin >> num1 >> num2;

	if(num1 > num2){
		cout << "Large number : " << num1 << endl;
	}
	else if(num1 < num2){
		cout << "Large number : " << num2 << endl;
	}
	else{
		cout << "Both number is equal" << endl;
	}

}