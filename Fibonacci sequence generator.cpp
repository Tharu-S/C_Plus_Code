#include <iostream>
#include <stdlib.h>
using namespace std;


int abc(int a) {
	if(a<=1) {
		return a;
	}
	else {
		return abc(a-1)+abc(a-2);
	}
}


int main() {

	int num,i;
	
	for( ; ; ) {
		cout << "Enter a number: ";
		cin >> num;
		if(num>0) {
			for(i=0; i<num; i++) {
				cout << " " << abc(i);
			}
			exit(0);	 	 
		}
		cout << "Invalid" << endl;
	}
	
return 0;
}


/*int main() {

	int num;
	
	for( ; ; ) {
		cout << "Enter a number: ";
		cin >> num;
		if(num>0) {
			int b=1,sum,c=0;
			for(int i=0; i<num; i++) {
				sum=b+c;
				cout << " " << sum;
				c=b;
				b=sum;
			}
			exit(0);	 	 
		}
		cout << "Invalid" << endl;
	}
	
return 0;
}*/

