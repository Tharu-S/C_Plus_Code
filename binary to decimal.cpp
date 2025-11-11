#include <iostream>
using namespace std;


void bin2dec(int b) {
	int sum=0,base=1;
	while(b>0){
		if((b%10)==1){
			sum=sum+(1*base);	 
		}
		b=b/10;
		base=base*2;
	}
	cout << "Decimal number: " << sum << endl << endl;
}


int main() {
	
	int choice,bin;
	
	for( ; ; ) {
	
		cout << "Enter the choice: \n1.New binary number convert \n2.Exit\n";
		cin >> choice;
		
		switch(choice) {
			case 1:
				cout << "\nEnter the binary number: ";
				cin >> bin;
				bin2dec(bin);
				break;
			case 2:
				cout << "\nExit\n";
				exit(0);
				break;
			default:
				cout << "\nInvalid number." << endl;
				break;
		}
		
	}
	

return 0;
}

