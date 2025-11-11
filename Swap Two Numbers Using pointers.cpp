#include <iostream>
using namespace std;


int main() {

	int a=10,b=20,temp;
	int *p1=&a;
	int *p2=&b;
	cout << "Before swap:\n" << "\ta=" << a << "\tb=" << b << endl;
	
	temp=*p1;
	*p1=*p2;
	*p2=temp;
	cout << "\nAfter swap:\n" << "\ta=" << a << "\tb=" << b << endl;

return 0;
}

