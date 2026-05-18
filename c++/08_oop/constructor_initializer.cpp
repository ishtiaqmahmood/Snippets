#include <iostream>

using namespace std;

class Student
{
    public:
    const int admissionFee;

    Student(int x)
    : admissionFee(x) //constructor initialization
    {
        cout << admissionFee << endl;
    }
};

int main()
{
    Student st(5000);

}
