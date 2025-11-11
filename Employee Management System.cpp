#include <iostream>
#include <string>
using namespace std;

class Employee {
	private:
		int Id;
		string name;
		float salary;
	public:
		Employee() {
			Id=0;
			name="No name";
			salary=0;
		}
		Employee(int i,string n,float s) {
			Id=i;
			name=n;
			salary=s;
		}
		void setId(int i) {
			Id=i;
		}
		void setName(string n) {
			name=n;
		}
		void setSalary(float s) {
			salary=s;
		}
		int getId() {
			return Id;
		}
		string getName() {
			return name;
		}
		float getSalary() {
			return salary;
		}
		void display() {
			cout << "\nId: " << getId() << "\nName: " << getName() << "\nSalary: " << getSalary() << endl;
		}
};



int main() {
	
	Employee emp1,emp3;
	Employee emp2(101,"Tharushi",50000);
	
	cout << "\nEmp1:";
	emp1.display();
	
	cout << "\nEmp2:";
	emp2.display();
	
	emp3.setId(102);
	emp3.setName("Subhani");
	emp3.setSalary(25000.75);
	
	cout << "\nEmp3:";
	emp3.display();
	
return 0;
}

