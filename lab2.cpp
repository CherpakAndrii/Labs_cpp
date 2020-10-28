#include <iostream>
#include <stdio.h>
#include <iostream>
using namespace std;
int main()
{
	double a, b, c, d;
	cout << "Input the length of the first rectangle: "; cin >> a;
	cout << "Input the width of the first rectangle: "; cin >> b;
	cout << "Input the length of the second rectangle: "; cin >> c;
	cout << "Input the width of the second rectangle: "; cin >> d;
	if (cin.fail())
	{
		system("cls");
		cout << "\nInvalid input\n" << endl;
		exit(0);
	}
	else if (a <= c && b <= d || a <= d && b <= c)
	{
		cout << "\nWe can fit the first rectangle into the second";
		cout << endl;
	}
	else
		cout << "\nWe can't fit the first rectangle into the second" << endl;
	system("pause");
}
