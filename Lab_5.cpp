#include <iostream>
#include <stdio.h>

using namespace std;
int main()
{
    int n = 0;
    for (int a = 1; a < 10; a++) {
        for (int b = 0; b < 10; b++) {
            for (int c = 1; c < 10; c++) {
                if (c==a) {
                    for (int d = 0; d < 10; d++){
                        if (d==b) {
                            n++;
                            int s = 1000 * a + 100 * b + 10 * c + d;
                            cout << s << endl;
                        }
                    }
                }
            }
        }
    }
    cout << "\nNumber of numbers: " << n << endl;
}
