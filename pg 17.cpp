#include <iostream> 
#include <conio.h> 
using namespace std;
class Box {
private:
	double l;
	double b;
	double h;
public:
	Box(double l, double b, double h) {
		cout << "Constructor called." << endl;
		this->l = l;
		this->b = b;
		this->h = h;
	}

	double Volume() {
		return l * b * h;
	}

	int compare(Box box) {
		return this->Volume() > box.Volume();
	}

};

int main() {
	Box Box2(2.0, 2.0, 2.0); 	// Declare box1 
	Box Box1(3.0, 3.0, 3.0); 	// Declare box2 

//clrscr(); 
	if (Box1.compare(Box2)) {
		cout << "Box2 is smaller" << endl;
	} else {
		cout << "Box1 is smaller" << endl;
	}
	getch();
}


