#include<iostream>
#include<conio.h>
#include<string.h>
using namespace std;
class compare {

private:
	char str[40];
public:
	void show() {
		cout << str;
	}
	void getdata() {
		cin >> str;
	}
	friend int operator==(compare, compare);
};
int operator ==(compare t1, compare t2) {
	if (strcmp(t1.str, t2.str) == 0)
		return 1;
	else
		return 0;
}
int main() {
	compare s1, s2, s3;
	cout << endl << "Enter the first string:";
	s1.getdata();
	cout << endl << "Enter the second string:";
	s2.getdata();
	cout << endl << "String1:";
	s1.show();
	cout << endl << "String2:";
	s2.show();
	if (s1 == s2)
		cout << endl << "Strings are equal.";
	else
		cout << endl << "Strings are unequal.";
	getch();
}

