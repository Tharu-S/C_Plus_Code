#include <iostream>
#include <string.h>
using namespace std;

class Student {

	private:
	
		int num[5],mark1[5],mark2[5],mark3[5],choice1,i,n;
		string name[5];
		
	public:
	
		void add() {
			for(i=0;i<5;i++) {
				
				cout << "\nEnter the name: ";
				getline(cin,name[i]);
				cout << "Enter the index number: ";
				cin >> num[i];
				cout << "Enter Maths marks: ";
				cin >> mark1[i];
				cout << "Enter Sinhala marks: ";
				cin >> mark2[i];
				cout << "Enter English marks: ";
				cin >> mark3[i];
				cin.ignore();
			}
		}
		
		void update() {
			cout << "\nEnter the index no: ";
			cin >> n;
			for(i=0; i<5; i++) {
				if(n==num[i]) {
					cout << "Enter your choice: \n1.Update name \n2.Update Maths marks \n3.Update Sinhala marks \n4.Update English marks\n";
					cin >> choice1;
					cin.ignore();
					switch(choice1) {
						case 1:
							cout << "\nEnter the name: ";
							getline(cin,name[i]);
							cout << "Successfully added.";
							break;
						case 2:
							cout << "Enter Maths marks: ";
							cin >> mark1[i];
							cout << "Successfully added.";
							break;
						case 3:
							cout << "Enter Sinhala marks: ";
							cin >> mark2[i];
							cout << "Successfully added.";
							break;
						case 4:
							cout << "Enter English marks: ";
							cin >> mark3[i];
							cout << "Successfully added.";
							break;
						default:
							cout << "Invalid\n";
							break;
					} 
				}
				else {
					cout << "Invalid.\n";
				}
			} 	  
		}
		
		void display() {
			cout << "\nName\t Index No\t Maths marks\t Sinhala marks\t English marks\t Total marks\t Average marks\n\n";
			cout << "---------------------------------------------------------------------------------------------------------\n\n";
			for(i=0; i<5; i++) {
				cout << name[i] << "\t\t" << num[i] << "\t\t" << mark1[i] << "\t\t" << mark2[i] << "\t\t" << mark3[i] << "\t\t" << mark1[i]+mark2[i]+mark3[i] << "\t\t" << (mark1[i]+mark2[i]+mark3[i])/3 << endl;	
			}
		}
	
};





int main() {
	
	Student std1;
	int choice;
	
for( ; ; ) {

	cout << "\n\t---Student Management System----\n\n";
	cout << "1.Add student\n";
	cout << "2.Update student\n";
	cout << "3.Display students\n";
	cout << "4.Exit\n";
	cout << "Enter your choice: ";
	cin >> choice;
	cin.ignore();
	
	switch(choice) {
		case 1:
			std1.add();
			break;
		case 2:
			std1.update();
			break;
		case 3:
			std1.display();
			break;
		case 4:
			cout << "Exit.";
			exit(0);
		default:
			cout << "Invalid";
			break;
	}
	
}
	
return 0;
}

