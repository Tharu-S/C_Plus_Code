#include <iostream>
using namespace std;

int main() {

	int a=10,b=20,temp1,temp2, *p1,*p2;
	cout << "\nBefore swap:\n\ta=" << a << "\n\tb=" << b << endl;
	
	p1=&a;
	p2=&b;
	temp1=*p1;
	*p1=*p2;
	*p2=temp1;
	
	cout << "\nBy pointers" << endl;
	cout << "\nAfter swap:\n\ta=" << a << "\n\tb=" << b << endl << endl;
	
	a=10;
	b=20;
	int &x=a;
	int &y=b;
	temp2=x;
	x=y;
	y=temp2;
		
	cout << "\n\nBy references" << endl;
	cout << "\nAfter swap:\n\ta=" << a << "\n\tb=" << b << endl << endl;
		
return 0;
}

