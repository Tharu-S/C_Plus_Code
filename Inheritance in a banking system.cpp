#include <iostream>
using namespace std;


class Account{
	protected:
		int accNo;
		string name;	
		double balance;
	public:
		void setAccount(int a, string n, double b) {
			accNo=a;
			name=n;
			balance=b;
		}
		void displayAccount() {
			cout << "Account number: " << accNo <<endl;
			cout << "Account holder's name: " << name << endl;
			cout << "Account balance: " << balance << endl;
		}	 
};



class SavingsAccount:public Account{
	private:
		float rate;
	public:
		void setRate(float r) {
			rate=r;
		}
		void displayRate() {
			cout << "Interest rate: " << rate << "%" << endl;
		}
};



class CurrentAccount:public Account{
	private:
		double limit;
	public:
		void setLimit(double l) {
			limit=l;
		}
		void displayLimit() {
			cout << "Overdraft limit: " << limit << endl;
		}
};



class FixedDeposit:public Account{
	private:
		float M_rate;
		int M_time;
	public:
		void setFixed(float m, float t) {
			M_rate=m;
			M_time=t;	 
		}
		void displayFixed() {
			cout << "Monthly interest rate: " << M_rate << "%" << endl;
			cout << "Monthly duration: " << M_time << endl;
		}
};




int main() {

	int accNo1;
	double balance1;
	string name1;
	float rate1;
	double limit1;
	int M_time1;
	
	SavingsAccount s;
	FixedDeposit f;
	CurrentAccount c;
	
	cout << "\n----Savings Account-----\n";
	cout << "Enter the account number: ";
	cin >> accNo1;
	cin.ignore();
	cout << "Enter the account holder's name: ";
	getline(cin,name1);
	cout << "Enter the balance: ";
	cin >> balance1;
	cout << "Enter Interest Rate (%): ";
	cin >> rate1;
	
	cout << "\n----Savings Account Details-----\n";
	s.setAccount(accNo1,name1,balance1);
	s.displayAccount();
	s.setRate(rate1);
	s.displayRate();
	
	
	cout << "\n----Current Account-----\n";
	cout << "Enter the account number: ";
	cin >> accNo1;
	cin.ignore();
	cout << "Enter the account holder's name: ";
	getline(cin,name1);
	cout << "Enter the balance: ";
	cin >> balance1;
	cout << "Enter Overdraft Limit: ";
	cin >> limit1;
	
	cout << "\n----Current Account Details-----\n";
	c.setAccount(accNo1,name1,balance1);
	c.displayAccount();
	c.setLimit(limit1);
	c.displayLimit();
	
	
	cout << "\n----Fixed Deposit Account-----\n";
	cout << "Enter the account number: ";
	cin >> accNo1;
	cin.ignore();
	cout << "Enter the account holder's name: ";
	getline(cin,name1);
	cout << "Enter the balance: ";
	cin >> balance1;
	cout << "Enter Interest Rate (%): ";
	cin >> rate1;
	cout << "Duration(months): ";
	cin >> M_time1;
	
	cout << "\n----Fixed Deposit Account Details-----\n";
	f.setAccount(accNo1,name1,balance1);
	f.displayAccount();
	f.setFixed(rate1,M_time1);
	f.displayFixed();

return 0;
}











