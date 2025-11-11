#include <iostream>
using namespace std;

class Employee {
	protected: 
		int id;
		string name;
		double salary;
	public:
		Employee (int a, string b, double c) {
			id=a;
			name=b;
			salary=c;	 
		}
		void display1() {
			cout << "Id is: " << id << endl;
			cout << "Name is: " << name << endl;
			cout << "Salary is: " << salary << endl;
		}
};


class Manager : public Employee {
	private:
		string department;
	public: 
		Manager (int a, string b, double c, string d) : Employee (a, b, c) {
			department = d;
		}
		void display2() {
			display1();
			cout << "Department is: " << department << endl;
		}
};


int main() {

	Manager m(101, "Tharushi Subhani", 35200.87, "Physical");
	
	cout << "- - - Manager Details - - -" << endl;
	m.display2();

return 0;
}

