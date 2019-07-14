#include <iostream>
using namespace std;

class Student
{
    private:
        string name;
    public:
        void setname(string x){
            name = x;
        }
        string getname(){
            return name;
        }

        string name1;

        Student(string name1){
            this -> name1 = name1;
        }

        void display(){
            cout << name1 << endl;
        }
};

int main()
{
    Student s1;
    s1.setname("Apple");
    cout << s1.getname() << endl;

    Student s2;
    s2.display();
}
