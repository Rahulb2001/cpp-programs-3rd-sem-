#include<fstream>
#include<ctype.h>
#include<string.h>
#include<iostream>
using namespace std;
int main() {
	char c, u;
	char fname[20];
	ofstream out;
	cout << "Enter the file name" << endl;
	cin >> fname;
	out.open(fname);
	cout << "Enter the text (Enter # at the end of the text)\n";
	while ((c = getchar()) != '#') {
		u = c - 32;
		out << u;
	}
	out.close();
	ifstream in(fname);
	cout << "the file contains\n";
	while (in.eof() == 0) {
		in.get(c);
		cout << c;
	}
	return 0;
}

