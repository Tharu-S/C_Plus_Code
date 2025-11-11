#include <iostream>
using namespace std;


void calculateSumTypes(int arr[10]) {
	int P_total=0;
	int N_total=0;
	for(int i=0; i<10; i++) {
		if(arr[i]>0) {
			P_total=P_total+arr[i];
		}
		else {
			N_total=N_total+arr[i];
		}
	}
	cout << "Sum of positive numbers: " << P_total << endl;
	cout << "Sum of negative numbers: " << N_total << endl;	
} 




int main() {

	int arr[10]={10,-3,25,-8,15,-1,0,-7,12,9};
	calculateSumTypes(arr);
	
return 0;
}

