#include <iostream>
using namespace std;

int main() {

	int arr[10]={52,1,0,3,6,98,74,3,65,459},i;
	
	for(i=9;i>=0;i--) {
		cout << arr[i] << " ";
	}
	
	int max=arr[0];
	for(i=0;i<10;i++) {
		if(max<=arr[i]) {
			max=arr[i];
		}
	}
	cout << "\n\nMax: " << max << endl;
	
	int min=arr[0];
	for(i=0;i<10;i++) {
		if(min>=arr[i]) {
			min=arr[i];
		}
	}
	cout << "Min: " << min << endl << endl;
	
	for(i=0; i<10; i++) {
		cout << arr[i]*arr[i] << " ";
	}
	cout << endl;

return 0;
}

