#include <iostream>
#include <fstream>
#include <string>

using namespace std;

int main()
{
    string line;

    ifstream file("student.txt");

    while(getline(file,line))
    {
        cout << line << endl;
    }

    file.close();
}
