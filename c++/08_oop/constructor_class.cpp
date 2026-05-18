#include <iostream>
using namespace std;

class Student
{
	public:
		int id;
		double  gpa;
		
		void display()
		{
			cout << id << "   " << gpa << endl;
		}

		Student(int x, double y) //constructor
		{
			id = x;
			gpa = y;
		}

		Student() // constructor overloading
		{
			cout << "Default connstructor " << endl;
		}

		
};

int main()
{
	Student gatling;

	Student jack(007, 3.25);
	jack.display();

}