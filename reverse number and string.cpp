#include <iostream>
using namespace std;

int main() {

	int num,i,mod;
	cout << "Enter the number: ";
	cin >> num;
	
	while(num >0) {
		mod=num%10;
		cout << mod;
		num=num/10;
	}
	
	/*string name;
	int i;
	cout << "Enter the name: ";
	getline(cin,name);
	
	for(i=name.length()-1; i>=0; i--) {
		cout << name[i];
	}*/

return 0;
}

