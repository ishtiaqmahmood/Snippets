#include <iostream>
using namespace std;

int addition(int,int);

int main(){
    int result = addition(20,20);
    cout << result;
}

int addition(int a, int b){
    int sum = a + b;
    return sum;
}
