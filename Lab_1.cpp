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
	if (cin.fail())
	{
		cin.clear();
		system("cls");
		cout << "\nInvalid input\n"<<endl;
		exit(0);
	}
	else if (a + b > c && b + c > a && a + c > b && a > 0 && b > 0 && c > 0)
	{
		p = (a + b + c) / 2;
		S = sqrt(p * (p - a) * (p - b) * (p - c));
		r = S / p;
		R = a * b * c / (4 * S);
		bisA = sqrt(b * c * (a + b + c) * (b + c - a)) / (b + c);
		bisB = sqrt(a * c * (a + b + c) * (a + c - b)) / (a + c);
		bisC = sqrt(a * b * (a + b + c) * (a + b - c)) / (a + b);
		printf("\nbisector1 = %.3f\n", bisA);
		printf("\nbisector2 = %.3f\n", bisB);
		printf("\nbisector3 = %.3f\n", bisC);
		printf("\nradius of the inscribed circle = %.3f\n", r);
		printf("\nradius of the circumscribed circle = %.3f\n", R);
		cout << endl;
		cout << endl;
	}
	else
		cout << "Invalid input" << endl;
	system("pause");
}
