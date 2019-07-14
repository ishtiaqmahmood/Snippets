#include <iostream>

using namespace std;

int main()
{
	for(int i=1; i<=100; i+=2){
		if(i==10){
			continue;
		}
		if(i==51){
			break;
		}
		cout << i << endl;

	}
}