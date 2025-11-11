#include <iostream>
using namespace std;

int factorial(int a) {
	if(a>1) {
		return a*factorial(a-1);
	}	 
}


int main() {

	int num;
	
for( ; ; ) {

	cout << "Enter a number: ";
	cin >> num;
	
	if(num>0) {
		cout << "Factorial: " << factorial(num) << endl;
		exit(0);
		
	}
	
	else if(num==0) {
		cout << "Factorial: " << num+1 << endl;
		exit(0);
	}
	
	else {
		cout << "Invalid." << endl;
	}
	
}

return 0;
}

