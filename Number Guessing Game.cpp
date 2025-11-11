#include <iostream>
using namespace std;

int main() {

	int number=2987,guessNum;
	
	for( ; ; ) {
		cout << "Enter a guess number: ";
		cin >> guessNum;
		if(guessNum==number) {
			cout << "The guess number is correct.";
			exit(0);
		}
		else {
			cout << "The guess number is incorrect. Try again.\n\n";
		}
	}

return 0;
}

