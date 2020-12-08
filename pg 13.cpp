#include<iostream> 
#include<conio.h> 
#include<iomanip>
using namespace std;
class max1 {
private:
	int x;
	int y;
public:
	void getdata() {
		cout << endl << "Enter a number";
		cin >> x;
		cout << endl << "Enter another number";
		cin >> y;
	}
	void showdata() {
		cout << endl << "x is" << x;
		cout << endl << "y is" << y;
	}
	friend int large(max1 m);
};
int large(max1 m) {
	if (m.x > m.y)
		return m.x;
	else
		return m.y;
}
int main() {
	max1 m;
	m.getdata();
	m.showdata();
	cout << endl << "Largest is" << large(m);
}

