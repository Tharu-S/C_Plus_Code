#include <iostream>
#include <vector>
using namespace std;


int main() {

	vector<int> num;
	num.push_back(45);
	num.push_back(56);
    num.push_back(94);
    num.push_back(87);
    num.push_back(24);
	int total=0;
	
	int max=num.at(0);
	for(int i=0; i<num.size(); i++) {
		if(max<=num.at(i)) {
			max=num.at(i);	  
		}
	}
	cout << "Max: " << max << endl;
	
	int min=num.at(0);
	for(int i=0; i<num.size(); i++) {
		if(min>=num.at(i)) {
			min=num.at(i);	  
		}
	}
	cout << "Min: " << min << endl;
	
	for(int i=0; i<num.size(); i++) {
		total=total+num.at(i);
	}
	cout << "Total is: " << total << endl;
	cout << "Average is: " << (float)total/num.size() << endl;

return 0;
}

