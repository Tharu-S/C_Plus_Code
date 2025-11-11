#include <iostream>
using namespace std;

int main() {

	int num,sum=0;
	
	cout << "Enter a number: ";
	cin >> num;
	
	if(num>=0) {
		while(num>0) {
			sum=sum+(num%10);
			num/=10;
		}
		cout << "Sum: " << sum;
	}
	else {
		cout << "Invalid.";
	}

return 0;
}

