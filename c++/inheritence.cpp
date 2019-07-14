#include <iostream>

using namespace std;

class Person
{
    public:
        string name;
        int age;

        void display()
        {
            cout << "Name : " << name << endl;
            cout << "Age : " << age << endl;
        }
};

class Student : public Person // inheritence
{
    public:
        int id;

        void display2()
        {
            cout << "ID : " << id << endl;
            cout << "Name : " << name << endl;
            cout << "Age : " << age << endl;
        }
};

int main()
{
    Student s1;
    s1.id = 001;
    s1.name = "Jack";
    s1.age = 80;
    s1.display2();
}
