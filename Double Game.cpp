#include <iostream>
using namespace std;

int doubleGame(int y) {
	return y*2;	   
}

int main() {

	for(int i=1;i<6;i++){
		cout << "Double of " << i << " is " << doubleGame(i) << "\n";
	}

return 0;
}

