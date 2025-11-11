#include <iostream>
using namespace std;


class Area{
	private:
		float radius;
		float PI;
	public:
		Area(float r) {
			radius=r;
			PI=3.14;	
		}
		void calArea() {
			cout << "Area is: " << PI*radius*radius << endl;	
		}
		
};


int main() {


	float num;
	
	cout << "Enter the radius: ";
	cin >> num;
	
	Area a1(num);
	a1.calArea();

return 0;
}

