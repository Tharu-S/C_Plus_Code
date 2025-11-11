#include <iostream>
using namespace std;


class Rectangle {
	private:
		float length;
		float width;
	public:
		Rectangle() {
			length=0;
			width=0;	
		}
		Rectangle(float l, float w) {
			length=l;
			width=w;	
		}
		Rectangle(const Rectangle &r) {
			length=r.length;
			width=r.width;
		}
		~Rectangle() {
			cout << "Closed. \n";
		}
		void display() {
			float Area=length*width;
			cout << "Area is: " << Area << endl;
		}
};





int main() {

	{
	Rectangle r1;
	r1.display();
	}
	
	Rectangle r2(10.5, 82.65);
	r2.display();
	
	Rectangle r3(r2);
	r3.display();

}

