#include <stdio.h>
#include <iostream>
#include <iomanip>
#include <cstdlib>
#include <time.h>

using namespace std;

int get_n();
void l_sort(int[], int), replace(int[], int), get_list(int[], int), outp(int[], int), retrn(int[], int[], int);

int main() {
	int* a, n = get_n();
	a = new int[n];
	get_list(a, n);
	cout << "Generated list: ";
	outp(a, n);
	l_sort(a, n);
	replace(a, n);
	cout << "Final list: ";
	outp(a, n);
	delete[] a;
}

int get_n() {
	int n;
	while (true) {
		cout << "Input the number of elements: ";
		cin >> n;
		if (n % 2 == 0) return n;
		cout << "\nThe number of elements must me even!\n" << endl;
	}
}

void get_list(int lst[], int n) {
	srand(time(NULL));
	for (int i = 0; i < n; i++) {
		lst[i] = rand() % 100;
	}
}

void outp(int lst[], int n) {
	for (int i = 0; i < n; i++) {
		cout << lst[i];
		if (i < n - 1) cout << ", ";
		else cout << endl;
	}
}

void replace(int lst[], int n) {
	int* n_lst, sum(int[], int, int);
	void reverse(int[], int);
	n_lst = new int[n];
	for (int i = 0; i < n / 2; i++) {
		n_lst[i] = lst[2 * i];
		n_lst[n-(i + 1)] = lst[2 * i + 1];
		if (sum(n_lst, 0, (n / 2)) > sum(n_lst, (n / 2), n)) reverse(n_lst, n);
	}
	retrn(lst, n_lst, n);
	delete[] n_lst;
}

int sum(int lst[], int min, int max) {
	int s = 0;
	for (int i = min; i < max; i++) {
		s += lst[i];
	}
	return s;
}

void reverse(int lst[], int n) {
	int* n_lst;
	n_lst = new int[n];
	for (int i = 0; i < n; i++) {
		n_lst[i] = lst[n-(i + 1)];
	}
	retrn(lst, n_lst, n);
	delete[] n_lst;
}

void l_sort(int lst[], int n) {
	int el, i, j;
	for (i = 0; i < n; i++) {
		for (j = 0; j < n-1; j++) {
			if (lst[j + 1] > lst[j]) {
				el = lst[j + 1];
				lst[j + 1] = lst[j];
				lst[j] = el;
			}
		}
	}
}

void retrn(int l1[], int l2[], int n) {
	for (int i = 0; i < n; i++) {
		l1[i] = l2[i];
	}
}
