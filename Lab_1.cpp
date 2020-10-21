#include <math.h>
#include <stdio.h>
#include <iostream>
using namespace std;
int main()
{
	double a, b, c, p, S, R, r, bisA, bisB, bisC;
	cout << "a = "; cin >> a;
	cout << "b = "; cin >> b;
	cout << "c = "; cin >> c;
	p = (a + b + c) / 2;
	S = sqrt(p * (p - a) * (p - b) * (p - c));
	r = S / p;
	R = a * b * c / (4 * S);
	bisA = sqrt(b * c * (a + b + c) * (b + c - a)) / (b + c);
	bisB = sqrt(a * c * (a + b + c) * (a + c - b)) / (a + c);
	bisC = sqrt(a * b * (a + b + c) * (a + b - c)) / (a + b);
	cout << "\nbisector1 = " << bisA << endl;
	cout << "\nbisector2 = " << bisB << endl;
	cout << "\nbisector3 = " << bisC << endl;
	cout << "\nradius of the inscribed circle = " << r << endl;
	cout << "\nradius of the circumscribed circle = " << R << endl;
	cout << endl;
	cout << endl;
	system("pause");
}