#include <iostream>

using namespace std;

int main(){
	int n, row, col;

	cout << "Enter the number of lines : ";
	cin >> n;

	for (int row = n; row >= 1; row--){
		for (col = 1; col <= row; col++){
			cout << " " << col;
		}
		cout << endl;
	}

	for (int row = n; row >= 1; row--){
		for (col = 1; col <= row; col++){
			cout << " " << row;
		}
		cout << endl;
	}

	for (int row = n; row >= 1; row--){
		for (col = 1; col <= row; col++){
			cout << " " << col%2;
		}
		cout << endl;
	}

	for (int row = n; row >= 1; row--){
		for (col = 1; col <= row; col++){
			cout << " " << row%2;
		}
		cout << endl;
	}

	for (int row = n; row >= 1; row--){
		for (col = 1; col <= row; col++){
			cout << " " << ((char)(col+64));
		}
		cout << endl;
	}

	for (int row = n; row >= 1; row--){
		for (col = 1; col <= row; col++){
			cout << " " << ((char)(row+64));
		}
		cout << endl;
	}


	for (int row = n; row >= 1; row--){
		for (col = 1; col <= row; col++){
			cout << " " << ((char)(col+96));
		}
		cout << endl;
	}

	for (int row = n; row >= 1; row--){
		for (col = 1; col <= row; col++){
			cout << " " << ((char)(row+96));
		}
		cout << endl;
	}


	for (int row = n; row >= 1; row--){
		for (col = 1; col <= row; col++){
			cout << " * ";
		}
		cout << endl;
	}

	for (int row = n; row >= 1; row--){
		for (col = 1; col <= row; col++){
			cout << " # ";
		}
		cout << endl;
	}


}