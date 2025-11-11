#include <iostream>
using namespace std;



class Shape {
	protected:
		const double Pi=3.14;
	public:
		virtual double area() {
			return 0;	 	 
		}
};


class Circle : public Shape {
	private:
		double radius;
	public:
		Circle(double r) {
			radius=r;
		} 
		double area() override {
			return 
		}	 
};


class Circle : public Shape {
	
};

