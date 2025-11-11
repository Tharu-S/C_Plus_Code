#include <iostream>
using namespace std;

struct Car {
	string brand;
	int year;
};

void myFunction(Car c) {
	cout << "Brand: " << c.brand << ", Year: " << c.year << "\n";
}

int main() {
	Car myCar = {"Toyota",2020};
	myFunction(myCar);
return 0;
}

