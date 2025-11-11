#include <iostream>
using namespace std;

class MathOperations {
	public:
		int add(int a, int b) {
			return a+b;
		}
		double add(double a, double b) {
			return a+b;
		}
		int add(int a, int b, int c) {
			return a+b+c;
		}
		
};



int main() {
	
	MathOperations math;
	
	cout << "10 + 5 = " << math.add(10, 5) << endl;
	cout << "10.25 + 75.23 = " << math.add(10.25, 75.23) << endl;
	cout << "10 + 5 + 8 = " << math.add(10, 5, 8) << endl;

return 0;
}

