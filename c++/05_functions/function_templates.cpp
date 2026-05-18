#include <iostream>

using namespace std;

template <class toll, class roll>

toll add(toll a, roll b){
    return a+b;
}

int main(){
    cout << add(10,20) << endl;
    cout << add(10.5,20.2) << endl;
}
