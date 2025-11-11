#include <iostream> 
#include <stdlib.h>
using namespace std;

float add(float a,float b) {
	return a+b;
}

float sub(float a,float b) {
	return a-b;
}

float multi(float a,float b) {
	return a*b;	
}

float div(float a,float b) {
	if(b==0) {
		cout << "Invalid";
		exit(0);
	}
	else {
		return a/b;
	}	 
}

int main() {

	int choice;
	float num1,num2;
	
	cout << "Enter a number 1: ";
	cin >> num1;
	
	cout << "Enter a number 2: ";
	cin >> num2;
	
	cout << "Enter your choice: \n1.Addition \n2.Substraction \n3.Multiplication \n4.Division\n";
	cin >> choice;
	
	cout << endl;
	
	switch(choice) {
		case 1:
			cout << "Addition is: " << add(num1,num2);
			break;
		case 2:
			cout << "Substraction is: " << sub(num1,num2);
			break;
		case 3:
			cout << "Multiplication is: " << multi(num1,num2);
			break;
		case 4:
			cout << "Division is: " << div(num1,num2);
			break;
		default:
			cout << "Invalid";
			break;
	}

return 0;
}

