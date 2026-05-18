#include <iostream>
#include <string>

using namespace std;

int main()
{
    string a = "Apple";
    string b = " con";
    string c;

    c = a + b;
    cout << c << endl;

    int len = c.size();
    cout << len << endl;
}
