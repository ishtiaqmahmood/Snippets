#include <iostream>

using namespace std;

int main()
{
	int i, num;
	cout << "Prime Number Calculator" << endl;
	cout << "Enter a number : ";
	cin >> num;
	
	for(i = 2; i < num; i++){
	    if(num % 2 != 0){
	    	cout << "Prime Number." << endl;
	    	break;
	    }
	    else{
	    	cout << "Not a prime number." << endl;
	    	break;
	    }
	}
}
