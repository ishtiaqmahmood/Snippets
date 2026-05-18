#include <iostream>

using namespace std;

void addition(int, int);
void subtraction(int, int);
void multiplication(int, int);
void division(int, int);

int main()
{
    int n, m;
    cout << "Enter two number with separated space :  ";
    cin >> n >> m;

    addition(n, m);
    multiplication(n,m);
    subtraction(n,m);
    division(n,m);

}

void addition(int a, int b){
    int sum = a + b;
    cout << "Sum : " << sum << endl;
}


void subtraction(int a, int b){
    int sub = a + b;
    cout << "Subtraction : " << sub<< endl;
}


void multiplication(int a, int b){
    int mul = a * b;
    cout << "Multiplication : " << mul << endl;
}


void division(int a, int b){
    float div = a / (float)b;
    cout << "Division : " << div << endl;
}

