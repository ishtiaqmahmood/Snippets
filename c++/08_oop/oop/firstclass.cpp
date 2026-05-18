#include "firstclass.h"
#include <iostream>
using namespace std;

firstclass::firstclass()
{
    cout << "Constructor is called" << endl;
}

firstclass :: ~firstclass()
{
    cout << "Destructor is called" << endl;
}

void firstclass :: display()
{
    cout << "I am nonconstant function" << endl;
}

void firstclass :: display2() const
{
    cout << "I am constant function" << endl;
}
