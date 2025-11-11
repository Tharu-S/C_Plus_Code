#include <iostream>
using namespace std;


int main() {

	string name;
	int i=0,vowel=0,total=0;
	cout << "Enter a name: ";
	getline(cin,name);
	
	for(i=name.length()-1; i>=0; i--) {
		cout << name[i];
		if(isalpha(name[i])) {
			total=total+1;
			if(name[i]=='a' || name[i]=='e' || name[i]=='i' || name[i]=='o' || name[i]=='u' || name[i]=='A' || name[i]=='E' || name[i]=='I' || name[i]=='O' || name[i]=='U') {
				vowel=vowel+1;
			}
		}
	}
	
	cout << endl;
	cout << "Vowels: " << vowel << endl;
	cout << "Consonants: " << total-vowel << endl;
	

return 0;
}

