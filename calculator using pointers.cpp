#include <iostream>
using namespace std;


class MathematicalOps {
	public:
		double addition(double *a, double *b) {
			return *a+ *b;
		}	 	 
		double substraction(double *a, double *b) {
			return (*a-(*b));
		}
		double multiplication(double *a, double *b) {
			return (*a)*(*b);
		}
		double division(double *a, double *b) {
			if(*b==0) {
				cout << "Division is Invalid." << endl;
				exit(0);
				return 0;
			}
			else {
				return (*a)/(*b);
			}
		}
		
};


int main() {
	
	double x=5, y=0;
	MathematicalOps m;
	cout << "Addition: " << m.addition(&x,&y) << endl;
	cout << "Substraction: " << m.substraction(&x,&y) << endl;
	cout << "Multiplication: " << m.multiplication(&x,&y) << endl;
	cout << "Division: " << m.division(&x,&y) << endl;

return 0;
}

