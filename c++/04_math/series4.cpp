//sum = 1-2+3-4+5-6...n

#include <iostream>

using namespace std;

int main(){
	int n, i, even = 0, odd = 0;
	
	cout << "Enter , n : ";
	cin >> n;
	
	for(i=1;i<=n;i++){
		if(i%2==0){
			even = even + i;
		}
		else{
			odd = odd + i;
		}
	}
	
	int sum = odd - even;
	cout << "Sum : " << sum;
}