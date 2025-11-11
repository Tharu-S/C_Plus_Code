#include <iostream>
using namespace std;

class Real{
	public:
		int r;
		void getR() {
			cout << "Enter real part: ";
			cin >> r;
		}
};

                                 
class Imag{
	public:
		int i;
		void getI() {
			cout << "Enter imaginary part: ";
			cin >> i;
		}
};

class Complex: public Real, public Imag {
	public:
		int rSum,iSum;
		Complex() : rSum(0), iSum(0) {
		}
		void setD(const Complex &c1, const Complex &c2) {
			rSum=c1.r+c2.r;
			iSum=c1.i+c2.i;
		}
		void display() const {
			cout << rSum << " + " << iSum << "i";
		}	 
};


int main() {
	
	Real r;
	Imag i;
	Complex c,c1,c2;
	
	cout << "\nEnter first complex number: \n";
	c1.getR();
	c1.getI();
	
	cout << "\nEnter second complex number: \n";
	c2.getR();
	c2.getI();
	
	cout << "\nComplex number is: ";
	c.setD(c1,c2);
	c.display();

return 0;
}

