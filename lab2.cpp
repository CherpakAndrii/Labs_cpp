#include <stdio.h>
#include <iostream>
using namespace std;
int main()
{
	double a, b, c;
	cout << "a = "; cin >> a;
	cout << "b = "; cin >> b;
	cout << "c = "; cin >> c;
	if (cin.fail())
	{
		system("cls");
		cout << "\nInvalid input\n"<<endl;
		exit(0);
	}
	if (a == b || b == c || a == c)
	{
		cout << "\nThere is some identical numbers";
		cout << endl;
		cout << endl;
	}
	else
		cout << "All numbers are different" << endl;
	system("pause");
}
