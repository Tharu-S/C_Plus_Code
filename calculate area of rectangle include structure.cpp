#include <iostream>
using namespace std;

int main() {
	
	struct {
		float length;
		float width;
	} Rectangle;
	
	cout << "Enter the width of rectangle is: ";
	cin >> Rectangle.length;
	
	cout << "Enter the length of rectangle is: ";
	cin >> Rectangle.width;
	
	float area=Rectangle.length*Rectangle.width;
	
	cout << "Area of rectangle is: " << area;
	
return 0;	 
}

