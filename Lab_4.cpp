#include <iostream>
#include <stdio.h>

using namespace std;
int main()
{
    double s = 1;
    double b = 1;
    double x, a;
    int n, i;
    cout << "x = "; cin >> x;
    cout << "n = "; cin >> n;
    if (cin.fail()) {
        system("cls");
        cout << "\nInvalid input\n" << endl;
        exit(0);}
    for (i = 1; i < n; i++) {
        a = b * x / i;
        s += a;
        b = a;}
    printf("The sum of the serie = %14.16f\n", s);
}
