#include <iostream>
using namespace std;

int main() {

	int Rcode=4567;
	int code;
	
	cout << "Type the code: ";
	cin >> code;
	
	for( ; ; ) {
		if(code == Rcode) {
			cout << "It's correct." ;
			exit(0);
		}
		else {
			cout << "It's wrong.\n";
			cout << "Type the code: ";
			cin >> code;
		}
	
	}
	
return 0;
}

