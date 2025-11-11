#include <iostream>
#include <string>
using namespace std;

int main() {
	
	string word;
	cout << "Enter a word: ";
	getline(cin, word);
	
	int length=word.length();
	
	cout << "Reverse word is: ";
	
	for(int i=(length-1);i>=0;i--) {
		cout << word[i];
	}
	
return 0;
}

