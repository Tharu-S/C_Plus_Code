#include <iostream>
using namespace std;

int main() {

	string letters[3][4][2]= { {  {"A", "B", "C", "D"}, {"E", "F", "G", "H"}, {"I", "J", "K", "L"} },{  {"1", "2", "3", "4"}, {"5", "6", "7", "8"}, {"9", "10", "11", "12"} } };
	 
	
	 
	  
	 
	 
	 

	
	for(int i=0;i<3;i++) {
		for(int j=0;j<4;j++) {
			for(int k=0;k<2;k++) {
				cout << letters[i][j][k] << "\n";
			}
		}
	}

return 0;
}

