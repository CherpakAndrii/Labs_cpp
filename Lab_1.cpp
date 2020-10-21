#include <math.h>									//підключаємо необхідні бібліобеки
#include <stdio.h>
#include <iostream>
using namespace std;
int main()											//ініціалізуємо функцію maim()
{
	double a, b, c, p, S, R, r, bisA, bisB, bisC;	//ініціалізуємо змінні 
	cout << "a = "; cin >> a;						//вводимо змінні
	cout << "b = "; cin >> b;
	cout << "c = "; cin >> c;
	p = (a + b + c) / 2;							//Обчислюємо півпериметр
	S = sqrt(p * (p - a) * (p - b) * (p - c));		//Обчислюємо площу
	r = S / p;										//Обч. радіус вписаного кола
	R = a * b * c / (4 * S);						//Обч. радіус описаного кола
	bisA = sqrt(b * c * (a + b + c) * (b + c - a)) / (b + c);	//обчислюємо бісектриси
	bisB = sqrt(a * c * (a + b + c) * (a + c - b)) / (a + c);
	bisC = sqrt(a * b * (a + b + c) * (a + b - c)) / (a + b);
	cout << "\nbisector1 = " << bisA << endl;		//виводимо необхідні дані
	cout << "\nbisector2 = " << bisB << endl;
	cout << "\nbisector3 = " << bisC << endl;
	cout << "\nradius of the inscribed circle = " << r << endl;
	cout << "\nradius of the circumscribed circle = " << R << endl;
	cout << endl;									// два порожніх рядки "для краси"
	cout << endl;
	system("pause");								// системна пауза, щоб користувач встиг зчитати дані
}