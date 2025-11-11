#include <iostream>
using namespace std;

int main() {

	int c,f,k;
	
	cout << "Enter the temperature in celcius: "; 
	cin >> c;
	
	f=(c*9/5)+32;
	k=c+273.15;
	
	cout << "The kelvin temperature is: " << k;
	cout << "\nThe farenhite temperature is: " << f;

return 0;
}

