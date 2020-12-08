#include <iostream>
#include <conio.h>
using namespace std;
class STUDENT {
private:
	char usn[10], name[10];
	float marks1, marks2, marks3;
	float avg;
public:
	void read() {
		cout << "Enter the name and USN : ";
		cin >> name >> usn;
		cout << "Enter marks1, marks2, marks3 : ";
		cin >> marks1 >> marks2 >> marks3;
	}
	void calculate() {
		int smallest;
		if ((marks1 < marks2) && (marks1 < marks3))
			avg = (marks2 + marks3) / 2.0;
		else if (marks2 < marks3)
			avg = (marks1 + marks3) / 2.0;
		else
			avg = (marks1 + marks2) / 2.0;
	}
	void display() {
		cout << "USN " << usn << endl;
		cout << " Name " << name << endl;
		cout << " Average Marks " << avg << endl;
	}
};
int main() {
	STUDENT s[10];
	for (int i = 0; i < 2; i++) {
		s[i].read();
	}
	for (int i = 0; i < 2; i++) {
		s[i].calculate();
		s[i].display();
	}
}

