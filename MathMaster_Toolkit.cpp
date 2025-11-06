#include <iostream>
#include <stdlib.h>
#include <cmath>
using namespace std;



// 1. Solve an Equation

class Linear {
	private:
		float a,b;
	public:
		void input() {
			cout << "Enter a: ";
			cin >> a;
			cout << "Enter b: ";
			cin >> b;
		}
		void solve() {
			if(a==0) {
				cout << "No solution (a cannot be 0)." << endl;
			}
			else {
				float x=-b/a;
				cout << "The root is: " << x << endl;
			}
		}
};

class Quadratic {
	private:
		float a,b,c;
	public:
		void input() {
			cout << "Enter a: ";
			cin >> a;
			cout << "Enter b: ";
			cin >> b;
			cout << "Enter c: ";
			cin >> c;
		}
		void solve() {
			if (a == 0) {
            	cout << "This is not a quadratic equation (a cannot be 0)." << endl;
            }
			else {
				float y = (b*b)-(4*a*c);
				if(y>0) {
					float r1 = (-b+sqrt(y)) / (2*a);
					float r2 = (-b-sqrt(y)) / (2*a);
					cout << "Two real roots: " << r1 << " and " << r2 << endl;
				}
				else if(y==0) {
					float r = -b / (2 * a);
            		cout << "One real root: " << r << endl;
				}
				else {
					float r1 = -b / (2*a);
					y = (-y);
					float r2 = sqrt(y) / (2*a);
					cout << "Two complex roots: " << r1 << "+" << r2 << "i and " << r1 << "-" << r2 << "i" << endl;
				}
			}
		}
};

void Equation() {
	Linear le;
	Quadratic qe;
	int option;
	do {
		cout << endl << "\t1. Solve Linear Equation (ax + b = 0)" << endl;
		cout << "\t2. Solve Quadratic Equation (ax^2 + bx + c = 0)" << endl;
		cout << "\t3. Back" << endl << endl;
		cout << "Enter your choice: ";
        cin >> option;
		switch(option) {
			case 1:
				le.input();
				le.solve();
				break;
			case 2:
				qe.input();
				qe.solve();
				break;
			case 3:
				cout << "Exiting Equation Solver." << endl;
				break;
			default:
				cout << "Invalid choice. Try again." << endl;
				break;
		}
	} while (option !=3);
}




// 2. Matrix Operations


class Matrix {
private:
    double data[10][10];
    int rows, cols;
public:
    bool input() { // Returns true if input is valid, false otherwise
        cout << "Enter number of rows: ";
        cin >> rows;
        if (rows <= 0) {
            cout << "Invalid number of rows! Returning to main menu." << endl << endl;
            return false;
        }
        cout << "Enter number of cols: ";
        cin >> cols;
        if (cols <= 0) {
            cout << "Invalid number of columns! Returning to main menu." << endl << endl;
            return false;
        }

        cout << "Enter elements of the matrix:" << endl;
        for (int i = 0; i < rows; i++) {
            for (int j = 0; j < cols; j++) {
                cout << "Element [" << i << "][" << j << "]: ";
                cin >> data[i][j];
            }
        }
        return true; // Input successful
    }

    void display() {
        for (int i = 0; i < rows; i++) {
            for (int j = 0; j < cols; j++) {
                cout << data[i][j] << "  ";
            }
            cout << endl;
        }
    }

    Matrix add(Matrix m) {
        Matrix result;
        if (rows != m.rows || cols != m.cols) {
            cout << "Matrix dimensions do not match for addition." << endl;
            result.rows = 0;
            result.cols = 0;
        } else {
            result.rows = rows;
            result.cols = cols;
            for (int i = 0; i < rows; i++)
                for (int j = 0; j < cols; j++)
                    result.data[i][j] = data[i][j] + m.data[i][j];
        }
        return result;
    }

    Matrix subtract(Matrix m) {
        Matrix result;
        if (rows != m.rows || cols != m.cols) {
            cout << "Matrix dimensions do not match for subtraction." << endl;
            result.rows = 0;
            result.cols = 0;
        } else {
            result.rows = rows;
            result.cols = cols;
            for (int i = 0; i < rows; i++)
                for (int j = 0; j < cols; j++)
                    result.data[i][j] = data[i][j] - m.data[i][j];
        }
        return result;
    }

    Matrix multiply(Matrix m) {
        Matrix result;
        if (cols != m.rows) {
            cout << "Matrix dimensions do not match for multiplication." << endl;
            result.rows = 0;
            result.cols = 0;
        } else {
            result.rows = rows;
            result.cols = m.cols;
            for (int i = 0; i < result.rows; i++) {
                for (int j = 0; j < result.cols; j++) {
                    result.data[i][j] = 0;
                    for (int k = 0; k < cols; k++)
                        result.data[i][j] += data[i][k] * m.data[k][j];
                }
            }
        }
        return result;
    }

    Matrix transposeA() {
        Matrix result;
        result.rows = cols;
        result.cols = rows;
        for (int i = 0; i < rows; i++)
            for (int j = 0; j < cols; j++)
                result.data[j][i] = data[i][j];
        return result;
    }

    Matrix transposeB() {
        Matrix result;
        result.rows = cols;
        result.cols = rows;
        for (int i = 0; i < rows; i++)
            for (int j = 0; j < cols; j++)
                result.data[j][i] = data[i][j];
        return result;
    }

    int getRows() { return rows; }
    int getCols() { return cols; }
};

void MatrixMenu() {
    int option;
    Matrix A, B, C;

    cout << "Enter Matrix A:" << endl;
    if (!A.input()) return; // Return to main menu if invalid

    cout << endl << "Enter Matrix B:" << endl;
    if (!B.input()) return; // Return to main menu if invalid

    do {
        cout << endl
             << "\t1. Add A + B" << endl
             << "\t2. Subtract A - B" << endl
             << "\t3. Multiply A * B" << endl
             << "\t4. Transpose A" << endl
             << "\t5. Transpose B" << endl
             << "\t6. Back" << endl << endl;
        cout << "Enter your choice: ";
        cin >> option;
        switch(option) {
            case 1:
                C = A.add(B);
                if (C.getRows() > 0) {
                    cout << endl << "Result of A + B:" << endl;
                    C.display();
                }
                break;
            case 2:
                C = A.subtract(B);
                if (C.getRows() > 0) {
                    cout << endl << "Result of A - B:" << endl;
                    C.display();
                }
                break;
            case 3:
                C = A.multiply(B);
                if (C.getRows() > 0) {
                    cout << endl << "Result of A * B:" << endl;
                    C.display();
                }
                break;
            case 4:
                C = A.transposeA();
                cout << endl << "Transpose of A:" << endl;
                C.display();
                break;
            case 5:
                C = B.transposeB();
                cout << endl << "Transpose of B:" << endl;
                C.display();
                break;
            case 6:
                cout << "Exiting Matrix Operations." << endl;
                break;
            default:
                cout << "Invalid choice. Try again." << endl;
        }
    } while(option != 6);
}



// 3. Geometry Toolkit


class Shape {
    public:
        virtual void input() = 0;
        virtual void calculate() = 0;
};

class Circle : public Shape {
    private:
        float radius;
    public:
        void input() {
            do {
                cout << "Enter radius of the circle (positive): ";
                cin >> radius;
                if (radius <= 0)
                    cout << "Error! Radius must be positive.\n";
            } while (radius <= 0);
        }
        void calculate() {
            float area = 3.1416f * radius * radius;
            cout << "Area of Circle = " << area << endl;
        }
};

class Rectangle : public Shape {
    private:
        float length, width;
    public:
        void input() {
            do {
                cout << "Enter length (positive): ";
                cin >> length;
                if (length <= 0)
                    cout << "Error! Length must be positive.\n";
            } while (length <= 0);

            do {
                cout << "Enter width (positive): ";
                cin >> width;
                if (width <= 0)
                    cout << "Error! Width must be positive.\n";
            } while (width <= 0);
        }
        void calculate() {
            float area = length * width;
            cout << "Area of Rectangle = " << area << endl;
        }
};

class Sphere : public Shape {
    private:
        float radius;
    public:
        void input() {
            do {
                cout << "Enter radius of the sphere (positive): ";
                cin >> radius;
                if (radius <= 0)
                    cout << "Error! Radius must be positive.\n";
            } while (radius <= 0);
        }
        void calculate() {
            float volume = (4.0f / 3) * 3.1416f * radius * radius * radius;
            cout << "Volume of Sphere = " << volume << endl;
        }
};

class Cuboid : public Shape {
    private:
        float length, width, height;
    public:
        void input() {
            do {
                cout << "Enter length (positive): ";
                cin >> length;
                if (length <= 0)
                    cout << "Error! Length must be positive.\n";
            } while (length <= 0);

            do {
                cout << "Enter width (positive): ";
                cin >> width;
                if (width <= 0)
                    cout << "Error! Width must be positive.\n";
            } while (width <= 0);

            do {
                cout << "Enter height (positive): ";
                cin >> height;
                if (height <= 0)
                    cout << "Error! Height must be positive.\n";
            } while (height <= 0);
        }
        void calculate() {
            float volume = length * width * height;
            cout << "Volume of Cuboid = " << volume << endl;
        }
};

void GeometryMenu() {
    int option;
    Shape* shape;
    do {
        cout << endl << "\t1. Area of Circle";
        cout << endl << "\t2. Area of Rectangle";
        cout << endl << "\t3. Volume of Sphere";
        cout << endl << "\t4. Volume of Cuboid";
        cout << endl << "\t5. Back" << endl;
        cout << endl << "Enter your choice: ";
        cin >> option;
        cout << endl;
        switch (option) {
            case 1: shape = new Circle(); break;
            case 2: shape = new Rectangle(); break;
            case 3: shape = new Sphere(); break;
            case 4: shape = new Cuboid(); break;
            case 5:
                cout << "Exiting Geometry Toolkit..." << endl;
                return;
            default:
                cout << "Invalid choice." << endl;
                continue;
        }
        shape->input();
        shape->calculate();
        delete shape;
    } while (option != 5);
}


//	4. Statistics Module



class Statistics {
private:
    float data[100];
    int size;
public:
    void input() {
        // Validate size
        while (true) {
            cout << "Enter number of elements (1-100): ";
            cin >> size;

            if (!cin) {  
                // If user enters non-numeric input
                cout << "Invalid input! Please enter an integer.\n";
                cin.clear();
                cin.ignore(numeric_limits<streamsize>::max(), '\n');
                continue;
            }

            if (size <= 0 || size > 100) {
                cout << "Error! Number of elements must be between 1 and 100.\n";
                continue;
            }
            break; // valid input
        }

        // Input data
        cout << "Enter the values:" << endl;
        for (int i = 0; i < size; i++) {
            cout << "Element " << i + 1 << ": ";
            cin >> data[i];
        }
    }

    void sortData() {
        for (int i = 0; i < size - 1; i++) {
            for (int j = i + 1; j < size; j++) {
                if (data[i] > data[j]) {
                    float temp = data[i];
                    data[i] = data[j];
                    data[j] = temp;
                }
            }
        }
    }

    float mean() {
        float sum = 0;
        for (int i = 0; i < size; i++) sum += data[i];
        return sum / size;
    }

    float median() {
        sortData();
        if (size % 2 == 0) {
            return (data[size / 2 - 1] + data[size / 2]) / 2;
        } else {
            return data[size / 2];
        }
    }

    float mode() {
        int maxCount = 0;
        float modeVal = data[0];
        for (int i = 0; i < size; i++) {
            int count = 0;
            for (int j = 0; j < size; j++) {
                if (data[j] == data[i]) count++;
            }
            if (count > maxCount) {
                maxCount = count;
                modeVal = data[i];
            }
        }
        if (maxCount == 1) {
            cout << "No mode found (all elements are unique)." << endl;
            return -1;
        }
        return modeVal;
    }

    float variance() {
        float m = mean();
        float sum = 0;
        for (int i = 0; i < size; i++) {
            sum += (data[i] - m) * (data[i] - m);
        }
        return sum / size;
    }

    float standardDeviation() {
        return sqrt(variance());
    }
};

void StatisticsMenu() {
    Statistics stats;
    int choice;
    stats.input();
    do {
        cout << endl << "\t--- Statistics Menu ---" << endl;
        cout << "\t1. Mean" << endl;
        cout << "\t2. Median" << endl;
        cout << "\t3. Mode" << endl;
        cout << "\t4. Variance" << endl;
        cout << "\t5. Standard Deviation" << endl;
        cout << "\t6. Back" << endl;
        cout << endl << "Enter your choice: ";
        cin >> choice;

        switch (choice) {
        case 1:
            cout << "Mean = " << stats.mean() << endl;
            break;
        case 2:
            cout << "Median = " << stats.median() << endl;
            break;
        case 3: {
            float m = stats.mode();
            if (m != -1) cout << "Mode = " << m << endl;
            break;
        }
        case 4:
            cout << "Variance = " << stats.variance() << endl;
            break;
        case 5:
            cout << "Standard Deviation = " << stats.standardDeviation() << endl;
            break;
        case 6:
            cout << "Exiting Statistics Module..." << endl;
            break;
        default:
            cout << "Invalid choice. Try again." << endl;
        }
    } while (choice != 6);
}


// 5. Number Theory Tools

class NumberTheory {
	public:
		bool isPrime(int n) {
        	if (n <= 1) return false;
        	for (int i = 2; i <= n / 2; i++) {
            	if (n % i == 0)
                return false;
        	}
        	return true;
    	}
		long long factorial(int n) {
        	if (n == 0 || n == 1) {
            	return 1;
			}
        	else {
            	return n * factorial(n - 1);
			}
    	}
};


void NumberTheoryMenu() {
    NumberTheory nt;
    int choice;
	do {
        cout << endl << "\t--- Number Theory Tools ---" << endl;
        cout << "\t1. Check Prime Number" << endl;
        cout << "\t2. Calculate Factorial" << endl;
        cout << "\t3. Back" << endl;
        cout << "\nEnter your choice: ";
        cin >> choice;
		switch (choice) {
        	case 1: {
            	int num;
            	cout << "Enter number to check prime: ";
            	cin >> num;
            	if (nt.isPrime(num)) {
                	cout << num << " is a Prime Number." << endl;
				}
            	else {
                	cout << num << " is NOT a Prime Number." << endl;
				}
            	break;
        	}
        	case 2: {
            	int num;
            	cout << "Enter number to calculate factorial: ";
            	cin >> num;
            	if (num < 0) {
                	cout << "Factorial is not defined for negative numbers." << endl;
            	}
				else {
                	cout << "Factorial of " << num << " is: " << nt.factorial(num) << endl;
            	}
				break;
        	}
        	case 3:
            	cout << "Exiting Number Theory Tools..." << endl;
            	break;
        	default:
            	cout << "Invalid choice. Try again." << endl;
        }
    } while (choice != 3);
}




//Main Method

int main() {

	int choice;

    cout << "=============================================================" << endl;
    cout << "      __  __       _   _     __  __           _            " << endl;
    cout << "     |  \\/  | __ _| |_| |__ |  \\/  | __ _ ___| |_ ___ _ __ " << endl;
    cout << "     | |\\/| |/ _` | __| '_ \\| |\\/| |/ _` / __| __/ _ \\ '__|" << endl;
    cout << "     | |  | | (_| | |_| | | | |  | | (_| \\__ \\ ||  __/ |   " << endl;
    cout << "     |_|  |_|\\__,_|\\__|_| |_|_|  |_|\\__,_|___/\\__\\___|_|   " << endl;
    cout << "                                                           " << endl;
    cout << "=============================================================" << endl << endl;

for( ; ; ) {
	cout << endl << "	=========MathMaster Toolkit==========" << endl;
	cout << "		1. Solve an Equation" << endl;
	cout << "		2. Matrix Operations" << endl;
	cout << "		3. Geometry Toolkit" << endl;
	cout << "		4. Statistics Module" << endl;
	cout << "		5. Number Theory Tools" << endl;
	cout << "		6. Exit" << endl;
	cout << "	======================================" << endl;

	cout << endl << "Enter your choice: ";
	cin >> choice;

	switch(choice) {
		case 1:
			Equation();
			break;
		case 2:
			MatrixMenu();
			break;
		case 3:
    		GeometryMenu();
    		break;
		case 4:
    		StatisticsMenu();
    		break;
		case 5:
    		NumberTheoryMenu();
    		break;
		case 6:
		    cout << endl << "=============================================================" << endl;
            cout << "\tThank you for using MathMaster Toolkit!" << endl;
            cout << "=============================================================" << endl << endl;

			exit(0);
			break;
		default:
			cout << "Enter correct number." << endl << endl;
			break;
	}

}

return 0;
}






