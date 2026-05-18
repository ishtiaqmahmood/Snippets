
#include <iostream>

using namespace std;

int main()
{
	char ch;

	cout << "Vowel-Consonant Checker" << endl;
	cout << "Enter any character : ";
	cin >> ch;

	// ch = tolower(ch); // convert all upper case to lower case

	if(ch == 'a' || ch == 'e'|| ch == 'i' || ch == 'o' || ch == 'u'){
		cout << "Vowel" << endl;
	}
	else if(ch == 'A' || ch == 'E'|| ch == 'I' || ch == 'O' || ch == 'U'){
		cout << "Vowel" << endl;
	}
	else{
		cout << "Consonant" << endl;
	}
	
}
