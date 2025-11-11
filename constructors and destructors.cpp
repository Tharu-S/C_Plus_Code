#include <iostream>
using namespace std;

class Student{
	private:
		string name;
		int age;
		int marks;
	public:
		Student(string n, int a, int m) {
			name=n;
			age=a;
			marks=m;
			cout << "\nWelcome " << name << " \nStudent record created" << endl;
		}
		~Student() {
			cout << "\n\nStudent record deleted.\n";
		}
		void display() {
			cout << "\nName: " << name;
			cout << "\nAge: " << age;
			cout << "\nMarks: " << marks;
		}
};


int main() {

	string name1;
	int age1,marks1;
	
	cout << "Enter the name: ";
	getline(cin,name1);
	
	cout << "Enter the age: ";
	cin >> age1;
	
	cout << "Enter the marks: ";
	cin >> marks1;
	
	Student s1(name1,age1,marks1);
	s1.display();

return 0;
}

