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

		void setValue(int x, double y)
		{
			id = x;
			gpa = y;
		}

};

int main()
{
	Student jack;
	
	jack.setValue(007, 3.25);
	jack.display();

}