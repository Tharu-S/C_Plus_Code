#include <iostream>
#include <stdlib.h>
using namespace std;

int main() {

	int num,total=0,i;
	char bin[100];
	
for( ; ; ) {

	cout << "Enter a number: ";
	cin >> num;
	if(num>0) {
		while(num>0) {
			bin[total]= (num%2)+'0';
			num/=2;
			total=total+1;
		}
	
		for(i=total-1; i>=0; i--) {
			cout << bin[i];
		}
		exit(0);
	}
	else if(num==0) {
		cout << num;
		exit(0);
	}
	else{
		cout << "Invalid." << endl;
	}
	
}

return 0;
}

