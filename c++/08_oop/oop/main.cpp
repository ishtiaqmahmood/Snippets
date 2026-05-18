#include <iostream>
#include "firstclass.h"

using namespace std;

int main()
{
    firstclass gatling;
    firstclass *p = &gatling;
    p -> display(); // selection operator

    const firstclass jack; // constant cbject
    jack.display2();

    return 0;
}
