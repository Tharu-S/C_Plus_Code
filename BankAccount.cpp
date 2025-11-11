#include <iostream>
#include <stdlib.h>
using namespace std;

int main() {
	
	int option;
	int number;
	
	struct {
		float deposit;
		float withdraw;
		float balance;
	} BankAccount[4];
	
	BankAccount[1].balance = 102540.87;
	BankAccount[2].balance = 567876.90;
	BankAccount[3].balance = 45600.43;
	
	cout << "\n\tBank Account" << "\n\t--------------------\n\n";
	
for( ; ; ) {
	
	cout << "\n 1)Deposit\n 2)Withdraw\n 3)Balance\n 4)Exit\n";
	cout << "Enter your option: ";
	cin >> option;
	
	switch(option) {
	
		case 1:
			cout << "Enter your account number: ";
			cin >> number;
			for(int i=1;i<4;i++) {
				if(i==number) {
					cout << "Enter your deposit money: ";
					cin >> BankAccount[i].deposit;
					BankAccount[i].balance = BankAccount[i].balance + BankAccount[i].deposit;
				}
			}
			break;
			
		case 2:
			cout << "Enter your account number: ";
			cin >> number;
			for(int i=1;i<4;i++) {
				if(i==number) {
					cout << "Enter your withdraw money: ";
					cin >> BankAccount[i].withdraw;
					BankAccount[i].balance = BankAccount[i].balance - BankAccount[i].deposit;
				}
			}
			break;
		
		case 3:
			cout << "Enter your account number: ";
			cin >> number;
			for(int i=1;i<4;i++) {
				if(i==number) {
					cout << "Your balance is: \n" << BankAccount[i].balance;
				}
			}
			break;
			
		case 4:
			exit(0);
			
		default:
			cout << "You entered wrong option. Please enter correct option.";
			break;
				   
	}
	
}
	
return 0;
}

