#include <iostream>
#include <fstream>
#include <string>
using namespace std;

int main()
{
    string name;
    ofstream file;

    file.open("student.txt", ios::out|ios::app); // appending file

    cout << "Enter your name : ";
    getline(cin,name);

    file << name << endl;
    file.close();
}
