#include <iostream>
using namespace std;

class Student {
	private:
		int id;
		string name;
		int marks;
	public:
		void display(int a,string b, int c) {
			id=a;
			name=b;
			marks=c;
			cout << "Student id: " << id << endl;
			cout << "Student's name: " << name << endl;
			cout << "Student's marks: " << marks << endl;
		}	 
};





int main() {

	Student std1;
	std1.display(102, "Tharushi Subhani", 89);

return 0;
}

