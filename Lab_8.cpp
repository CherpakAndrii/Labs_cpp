#include <stdio.h>
#include <iostream>
#include <iomanip>
#include <cstdlib>

using namespace std;

int main() {
	int get_n(), **a, n = get_n();
	int** InputMatrix(int);
	void del_matrix(int**, int), outp(int**, int), replace(int**, int);
	a = InputMatrix(n);
	cout << "Generated matrix: " << endl;
	outp(a, n);
	cout << "\nThe central element: " << a[n / 2][n / 2] << endl;
	replace(a, n);
	cout << "Final matrix: " << endl;
	outp(a, n);
	del_matrix(a, n);
}

int get_n() {
	int n;
	while (true) {
		cout << "Input the size of square matrix: ";
		cin >> n;
		if (n % 2 != 0) return n;
		cout << "\nThe number of elements should be odd!\n" << endl;
	}
}

void outp(int** mat, int n) {
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < n; j++) {
			cout << setw(6)<<mat[i][j];
		}
		cout << endl;
	}
}

int** InputMatrix(int n) {
	int** a = new int* [n];
	for (int i = 0; i < n; i++) a[i] = new int[n];
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < n; j++) {
			printf("\nInput the %d-th element of the %d-th line: ", j+1, i+1);
			cin >> a[i][j];
		}
	}
	return a;
}

void replace(int** a, int n) {
	int t;
	for (int i = 0; i < n/2; i++) {
		for (int j = 0; j < n; j++) {
			if (j > i && n - j - 1 > i || j < i && n - j - 1 < i) {
				t = a[i][j];
				a[i][j] = a[n - i - 1][j];
				a[n - i - 1][j] = t;
			}
		}
	}
}

void del_matrix(int** a, int n) {
	for (int i = 0; i < n; i++) {
		delete[] a[i];
	}
	delete[] a;
}