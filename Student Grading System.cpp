#include <iostream>
using namespace std;

int main() {

	int mark;
	
	cout << "Enter the marks: ";
	cin >> mark;

	if(mark>100) {
		cout << "Impossible.";
	}
	else if(mark>=75) {
		cout << "The grade is: A";
	}
	else if(mark>=65) {
		cout << "The grade is: B";
	}
	else if(mark>=55) {
		cout << "The grade is: C";
	}
	else if(mark>=35) {
		cout << "The grade is: S";
	}
	else if(mark>=0) {
		cout << "The grade is: F";
	}
	else {
		cout << "Impossible.";
	}
	
return 0;
}

