#include <iostream>

using namespace std;

int main()
{
	// 1 2 3 ...... n
	// 2 4 6 ...... n
	// 1 3 5 ...... n
	
	int i, n;
	
	cout << "Enter, n : ";
	cin >> n;
	
	for(i=1;i<=n;i=i+2){
		cout << i << " ";
	}
}
