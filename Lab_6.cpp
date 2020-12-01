#include <iostream>
#include <stdio.h>
#include <math.h>

using namespace std;

double eps = 0.00001, x1 = 0.818, x2 = 1.403, x3 = 3.141, area;

double get_area_1() {
	double a, b, c, s1 = 0;
	for (double x = x1; x <= x2; x += eps) {
		a = log(1 + pow(x, 2));
		b = exp(-1 * pow(x, 2));
		c = (a - b) * eps;
		s1 += c;
	}
	return s1;
}

double get_area_2() {
	double a, b, c, s2 = 0;
	for (double x = x2; x <= x3; x += eps) {
		a = 2 / x * cos(x / 2);
		b = exp(-1 * pow(x, 2));
		c = (a - b) * eps;
		s2 += c;
	}
	return s2;
}


int main()
{
	double s1 = get_area_1(), s2 = get_area_2();
	area = s1 + s2;
	cout << "The area = " << area << endl;
}
