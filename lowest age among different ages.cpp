#include <iostream>
using namespace std;

int main() {

	int ages[8] = {20,22,18,35,48,26,87,70};
	int i;
	int length= sizeof(ages)/sizeof(ages[0]);
	int lowestAge = ages[0];
	
	for(i=1;i<8;i++) {
		if(ages[i]<ages[0]) {
			lowestAge=ages[i];
		}
	}
	
	cout << "The lowest age = " << lowestAge;

return 0;
}

