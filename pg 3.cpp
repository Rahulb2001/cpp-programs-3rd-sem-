#include<iostream>
#include<conio.h> 
#include<math.h> 
const float PI = 3.1415;
using namespace std;
float area(float b, float h) {
	float area1;
	area1 = 0.5 * b * h;
	return area1;
}
float area(float s1) {
	float area2;
	area2 = sqrt(3) / 4 * (s1 * s1);
	return area2;
}
float area(float s1, float s2, float ang) {
	float area3;
	area3 = (s1 * s2 * sin((PI / 180) * ang)) / 2;
	return area3;
}
int main() {
	float b, h, s1, s2, res1, res2, res3, ang;
	cout << "\nEnter value of base and height";
	cin >> b >> h;
	res1 = area(b, h);
	cout << "\nArea of right angle Triangle is " << res1 << endl;
	cout << "\n Input the value of the side of the equilateral triangle: ";
	cin >> s1;
	res2 = area(s1);
	cout << "\nArea of equilateral Triangle is " << res2 << endl;
	cout << "\n Input side1,side2,angle values for scalene triangle";
	cin >> s1 >> s2 >> ang;
	res3 = area(s1, s2, ang);
	cout << "\nArea of scalene Triangle is " << res3 << endl;
}

