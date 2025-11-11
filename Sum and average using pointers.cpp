#include <iostream>
using namespace std;

int main() {
	
	int i=0,arr[100],num,sum=0;
	
	cout << "Enter number of elements:";
	cin >> num;
	
	cout << "Enter elements:";
	for(i=0; i<num; i++) {
		cin >> arr[i];	  
	}
	
	int *ptr=arr;
	for(i=0; i<num; i++) {
		sum+=*(ptr+i);
	}
	
	float avg= (float)sum/num;
	
	cout << "\nSum is: " << sum << endl;
	cout << "Average is: " << avg << endl;

return 0;
}

