#include <iostream>
#include <cctype>
using namespace std;


int main() {
	
	string name;
	int upper=0;
	int lower=0;
	
	cout << "Enter a string: ";
	getline(cin,name);
	
	for(int i=0;i<name.length(); i++) {
		if(isupper(name[i])) {
			upper=upper+1;
		}
		if(islower(name[i])) {
			lower=lower+1;
		}
	}
	
	cout << "Number of uppercase letters: " << upper << endl;
	cout << "Number of lowercase letters: " << lower << endl;


return 0;
} 



