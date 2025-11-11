#include <iostream>
using namespace std;

int main() {

	int number;
	int Rev_num;
	
	cout << "Enter a number: ";
	cin >> number;
	
	cout << "\nReversed number: ";
	
	while(number>0) {
		Rev_num=number%10;
		cout << "" << Rev_num;
		number=number/10;	 
	}

return 0;
}

