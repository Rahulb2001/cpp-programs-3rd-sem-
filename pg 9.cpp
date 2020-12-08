#include<iostream>
#include<conio.h>
#include<math.h> 
#include<iomanip>
using namespace std;
const float pi = 3.1416;
class shape {
public:
	virtual void getdata()=0;
	virtual void area()=0;
};
class square: public shape {
private:
	float side;
public:
	void getdata() {
		cout << "\n ENTER SIDE VALUE OF SQUARE \n";
		cin >> side;
	}
	void area() {
		cout << side * side;
	}
};
class triangle: public shape {
private:
	float a, b, c;
public:
	void getdata() {
		cout << "\n ENTER a,b,c VALUE OF TRIANGLE \n";
		cin >> a >> b >> c;
	}
	void area() {
		float s = (a + b + c) / 2.0;
		cout << sqrt(s * (s - a) * (s - b) * (s - c));
	}
};
class circle: public shape {
private:
	float r;
public:
	void getdata() {
		cout << "\n ENTER VALUE OF CIRCLE \n";
		cin >> r;
	}
	void area() {
		cout << pi * r * r;
	}
};
int main() {
	square s;
	triangle t;
	circle c;
	s.getdata();
	s.area();
	t.getdata();
	t.area();
	c.getdata();
	c.area();
	getch();
}

