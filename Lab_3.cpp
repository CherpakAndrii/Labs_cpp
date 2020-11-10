#include <iostream>
#include <stdio.h>

using namespace std;
int main()
{
    double x = 0.56;
    double n = 0;
    double s = 0;
    double b = pow((-1), n) * (pow(x, (2 * n)) + 1) / (pow(2, n) + 1);
    while (abs(b) > pow(10, (-4)))
    {
        s += b;
        n++;
        b = pow((-1), n) * (pow(x, (2 * n)) + 1) / (pow(2, n) + 1);
    }
    printf("The sum of the serie = %14.12f\n", s);
}