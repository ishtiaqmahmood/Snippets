#include <iostream>

using namespace std;

class Person
{
    public:
        virtual void display()
        {
            cout << "I am a person" <<endl;
        }
};

class Student : public Person
{
    public:
        void display()
        {
            cout << "I am a student" <<endl;
        }
};

class Teacher : public Person
{
    public:
        void display()
        {
            cout << "I am a teacher" <<endl;
        }
};

int main()
{
    Teacher t;
    Student s;
    Person *p;

    p = &s;
    p -> display();

}
